cmake_minimum_required(VERSION 3.10)

project(random_generator_and_text)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} random_generator_and_text.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})