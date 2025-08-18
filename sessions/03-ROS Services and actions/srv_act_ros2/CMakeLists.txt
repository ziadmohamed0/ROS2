cmake_minimum_required(VERSION 3.5)
project(srv_act_ros2)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)

# Generate interfaces
rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/AddTwoInts.srv"
  "action/Countdown.action"
)

ament_export_dependencies(rosidl_default_runtime)

# Create executables
add_executable(add_two_ints_server src/add_two_ints_server.cpp)
add_executable(add_two_ints_client src/add_two_ints_client.cpp)
add_executable(countdown_server src/countdown_server.cpp)
add_executable(countdown_client src/countdown_client.cpp)

# Add dependencies
ament_target_dependencies(add_two_ints_server rclcpp)
ament_target_dependencies(add_two_ints_client rclcpp)
ament_target_dependencies(countdown_server rclcpp rclcpp_action)
ament_target_dependencies(countdown_client rclcpp rclcpp_action)

# Link interfaces using modern syntax
rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(add_two_ints_server "${cpp_typesupport_target}")
target_link_libraries(add_two_ints_client "${cpp_typesupport_target}")
target_link_libraries(countdown_server "${cpp_typesupport_target}")
target_link_libraries(countdown_client "${cpp_typesupport_target}")

# Install executables
install(TARGETS
  add_two_ints_server
  add_two_ints_client
  countdown_server
  countdown_client
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
