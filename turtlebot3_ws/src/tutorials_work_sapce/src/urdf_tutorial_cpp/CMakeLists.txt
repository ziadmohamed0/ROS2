cmake_minimum_required(VERSION 3.8)
project(urdf_tutorial_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rclcpp REQUIRED)

add_executable(urdf_tutorial_cpp src/urdf_tutorial.cpp)

ament_target_dependencies(urdf_tutorial_cpp
  geometry_msgs
  sensor_msgs
  tf2_ros
  tf2_geometry_msgs
  rclcpp
)

install(TARGETS
  urdf_tutorial_cpp
  DESTINATION lib/${PROJECT_NAME}
)

install(DIRECTORY
  launch
  DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY
  urdf
  DESTINATION share/${PROJECT_NAME}
)

ament_package()