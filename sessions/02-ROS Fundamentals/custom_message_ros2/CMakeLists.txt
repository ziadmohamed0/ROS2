cmake_minimum_required(VERSION 3.5)
project(custom_message)

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "msg/Num.msg"
  DEPENDENCIES std_msgs
)

ament_export_dependencies(rosidl_default_runtime)

add_executable(talker src/talker.cpp)
ament_target_dependencies(talker rclcpp std_msgs)
rosidl_target_interfaces(talker ${PROJECT_NAME} "rosidl_typesupport_cpp")

add_executable(listener src/listener.cpp)
ament_target_dependencies(listener rclcpp std_msgs)
rosidl_target_interfaces(listener ${PROJECT_NAME} "rosidl_typesupport_cpp")

install(TARGETS
  talker
  listener
  DESTINATION lib/${PROJECT_NAME}
)

ament_package()
