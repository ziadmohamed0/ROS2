cmake_minimum_required(VERSION 3.5)
project(srv_act_ros2)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/AddTwoInts.srv"
  "action/Countdown.action"
)

ament_export_dependencies(rosidl_default_runtime)

add_executable(add_two_ints_server src/add_two_ints_server.cpp)
add_executable(add_two_ints_client src/add_two_ints_client.cpp)
add_executable(countdown_server src/countdown_server.cpp)
add_executable(countdown_client src/countdown_client.cpp)

ament_target_dependencies(add_two_ints_server rclcpp)
ament_target_dependencies(add_two_ints_client rclcpp)
ament_target_dependencies(countdown_server rclcpp rclcpp_action)
ament_target_dependencies(countdown_client rclcpp rclcpp_action)

rosidl_target_interfaces(add_two_ints_server ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(add_two_ints_client ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(countdown_server ${PROJECT_NAME} "rosidl_typesupport_cpp")
rosidl_target_interfaces(countdown_client ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  add_two_ints_server
  add_two_ints_client
  countdown_server
  countdown_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
