cmake_minimum_required(VERSION 3.5)
project(pub_sub_ros2)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)

add_executable(pubc src/pubc.cpp)
ament_target_dependencies(pubc rclcpp std_msgs)

add_executable(supc src/supc.cpp)
ament_target_dependencies(supc rclcpp std_msgs)

install(TARGETS
  pubc
  supc
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
