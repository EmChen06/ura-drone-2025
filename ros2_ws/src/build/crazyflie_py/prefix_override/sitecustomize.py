import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/uav/ura-drone-2025/ros2_ws/src/install/crazyflie_py'
