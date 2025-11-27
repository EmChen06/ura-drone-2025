#!/usr/bin/env python3
import math
import rclpy
from rclpy.node import Node
from rclpy.action import ActionServer
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from p2p_interfaces.action import HoverToPoint
import time


class HoverController(Node):
    def __init__(self):
        super().__init__('hover_controller')
        self.declare_parameter('robot_prefix', '/crazyflie')
        robot_prefix = self.get_parameter('robot_prefix').value

        self.odom_sub = self.create_subscription(
            Odometry,
            "/crazyflie/odom",
            self.odom_callback,
            10)
        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.position = [0.0, 0.0, 0.0]
        #self.pid = pid_velocity_fixed_height_controller()

        self.kp = 0.8
        self.ki = 0.0
        self.kd = 0.3
        self.dt = 0.05
        self.integral = [0.0, 0.0, 0.0]
        self.prev_error = [0.0, 0.0, 0.0]

        self.action_server = ActionServer(
            self,
            HoverToPoint,
            'hover_to_point',
            execute_callback=self.execute_callback)

        self.get_logger().info("✅ HoverController node initialized!")
        self.target = None


    def odom_callback(self, msg):
        self.position[0] = msg.pose.pose.position.x
        self.position[1] = msg.pose.pose.position.y
        self.position[2] = msg.pose.pose.position.z

        if self.target != None:
            # error_mag = math.dist(self.position, self.target)
            # if error_mag < 0.05:
            #     self.get_logger().info('Hover position reached.')

            vel_cmd = self.pid_step(self.target)
            self.cmd_pub.publish(vel_cmd)


    def pid_step(self, target):
        vel_cmd = Twist()
        error = target[2] - self.position[2]
        print(error)
        output = self.kp*error
        vel_cmd.linear.z = output

        # for i, axis in enumerate(['x', 'y', 'z']):
        #     error = target[i] - self.position[i]
        #     self.integral[i] += error * self.dt
        #     derivative = (error - self.prev_error[i]) / self.dt
        #     output = self.kp * error
        #     setattr(vel_cmd.linear, axis, output)
        #     self.prev_error[i] = error
        return vel_cmd

    async def execute_callback(self, goal_handle):
        self.get_logger().info('Executing hover_to_point action...')
        self.target = [goal_handle.request.x, goal_handle.request.y, goal_handle.request.z]
        goal_handle.succeed()
        # while rclpy.ok():
        #     error_mag = math.dist(self.position, target)
        #     if error_mag < 0.05:
        #         self.get_logger().info('Hover position reached.')
        #         break

        #     vel_cmd = self.pid_step(target)
        #     self.cmd_pub.publish(vel_cmd)

        #     # async sleep
        #     time.sleep(loop_rate)

        return HoverToPoint.Result() 


def main(args=None):
    rclpy.init(args=args)
    node = HoverController()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
