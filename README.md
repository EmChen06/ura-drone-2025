# ura-drone-2025

change yaml uri: to match the drone address
colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release
ros2 launch crazyflie launch.py mocap:=False
https://www.bitcraze.io/documentation/repository/crazyflie-firmware/master/building-and-flashing/build
https://www.bitcraze.io/documentation/tutorials/getting-started-with-development/
https://www.bitcraze.io/documentation/repository/crazyflie-simulation/main/

https://imrclab.github.io/crazyswarm2/installation.html

https://sal.aalto.fi/publications/pdf-files/eluu11_public.pdf
https://andrew.gibiansky.com/downloads/pdf/Quadcopter%20Dynamics,%20Simulation,%20and%20Control.pdf


https://docs.ros.org/en/jazzy/Installation/Ubuntu-Install-Debs.html


. /opt/ros/jazzy/setup.bash
. ../venv/bin/activate
export PYTHONPATH=/home/hrml/projects/cl2-ura/crazyflie-firmware/build:$PYTHONPATH
. install/local_setup.bash

. ../venv_clean/bin/activate
. /opt/ros/jazzy/setup.bash

colcon build --symlink-install --cmake-args -DCMAKE_BUILD_TYPE=Release

in firmware:
make cf2_defconfig
make bindings_python
cd build
python3 setup.py install --user

ros2 launch crazyflie_examples launch.py script:=hello_world backend:=sim

ros2 launch crazyflie launch.py backend:=sim rviz:=True gui:=False teleop:=False
ros2 run crazyflie_examples hello_world --ros-args -p use_sim_time:=True


actual runs:
cd /home/hrml/projects/cl2-ura/crazyswarm2
. ../venv_clean/bin/activate
. /opt/ros/jazzy/setup.bash
. install/local_setup.bash

ros2 launch crazyflie launch.py mocap:=False
ros2 run crazyflie_examples hello_world


client stuff
cd crazyflie-clients-python
. ../venv_clean/bin/activate
python bin/cfclient

