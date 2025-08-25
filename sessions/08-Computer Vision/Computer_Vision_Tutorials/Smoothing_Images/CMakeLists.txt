cmake_minimum_required(VERSION 3.10)

project(smoothing_images)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} smoothing_images.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})