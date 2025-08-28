cmake_minimum_required(VERSION 3.8)
project(turtlebot3_custom)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rclcpp_action REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
"action/NavigateToGoal.action"
"srv/GetRobotStatus.srv"
DEPENDENCIES geometry_msgs sensor_msgs
)

add_executable(turtlebot3_controller src/turtlebot3_controller.cpp)
add_executable(robot_status_server src/robot_status_server.cpp)
add_executable(status_client src/status_client.cpp)
add_executable(navigation_action_server src/navigation_action_server.cpp)
add_executable(navigation_client src/navigation_client.cpp)
add_executable(modern_teleop_controller src/modern_teleop_controller.cpp)

ament_target_dependencies(turtlebot3_controller
rclcpp std_msgs geometry_msgs sensor_msgs nav_msgs tf2 tf2_ros tf2_geometry_msgs)

ament_target_dependencies(robot_status_server
rclcpp geometry_msgs sensor_msgs nav_msgs)

ament_target_dependencies(status_client
  rclcpp
)

ament_target_dependencies(navigation_action_server
  rclcpp rclcpp_action geometry_msgs nav_msgs tf2 tf2_geometry_msgs
)

ament_target_dependencies(navigation_client
  rclcpp
  rclcpp_action
  geometry_msgs
  nav_msgs
)

ament_target_dependencies(modern_teleop_controller
  rclcpp 
  std_msgs 
  geometry_msgs 
  sensor_msgs 
  nav_msgs 
  tf2 
  tf2_ros 
  tf2_geometry_msgs
)

rosidl_get_typesupport_target(robot_status_server_typesupport ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(robot_status_server ${robot_status_server_typesupport})

rosidl_get_typesupport_target(status_client_typesupport ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(status_client ${status_client_typesupport})

rosidl_get_typesupport_target(navigation_action_server_typesupport ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(navigation_action_server ${navigation_action_server_typesupport})

rosidl_get_typesupport_target(navigation_client_typesupport ${PROJECT_NAME} "rosidl_typesupport_cpp")
target_link_libraries(navigation_client ${navigation_client_typesupport})

install(TARGETS
  turtlebot3_controller
  robot_status_server
  status_client
  navigation_action_server
  navigation_client
  modern_teleop_controller
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
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
