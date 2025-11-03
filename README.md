# ura-drone-2025

change yaml uri: to match the drone address
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
ros2 launch crazyflie launch.py mocap:=False
