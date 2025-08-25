cmake_minimum_required(VERSION 3.10)

project(drawing_geometric)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} drawing_geometric.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})