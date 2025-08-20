cmake_minimum_required(VERSION 3.8)
project(services_actions)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/AddTwoInt.srv"
  "action/Countdown.action"
)

ament_export_dependencies(rosidl_default_runtime)

add_executable(add_two_ints_server src/service_add_two_int_server.cpp)
add_executable(add_two_ints_client src/service_add_two_int_client.cpp)
add_executable(count_down_action_server src/action_count_down_server.cpp)
add_executable(count_down_action_client src/action_count_down_client.cpp)

ament_target_dependencies(add_two_ints_server rclcpp)
ament_target_dependencies(add_two_ints_client rclcpp)
ament_target_dependencies(count_down_action_server rclcpp rclcpp_action)
ament_target_dependencies(count_down_action_client rclcpp rclcpp_action)

rosidl_get_typesupport_target(cpp_typesupport_target ${PROJECT_NAME} "rosidl_typesupport_cpp")

target_link_libraries(add_two_ints_server "${cpp_typesupport_target}")
target_link_libraries(add_two_ints_client "${cpp_typesupport_target}")
target_link_libraries(count_down_action_server "${cpp_typesupport_target}")
target_link_libraries(count_down_action_client "${cpp_typesupport_target}")

install( TARGETS
  add_two_ints_server
  add_two_ints_client
  count_down_action_server
  count_down_action_client
  DESTINATION lib/${PROJECT_NAME}
)

install( DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
