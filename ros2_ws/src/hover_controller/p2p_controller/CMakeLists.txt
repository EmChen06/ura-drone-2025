cmake_minimum_required(VERSION 3.8)
project(p2p_controller)

find_package(ament_cmake REQUIRED)
find_package(ament_cmake_python REQUIRED)
find_package(rclpy REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(action_msgs REQUIRED)
find_package(p2p_interfaces REQUIRED)

ament_python_install_package(${PROJECT_NAME})

install(PROGRAMS
  p2p_controller/hover_controller.py
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
