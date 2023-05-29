cmake_minimum_required(VERSION 3.22)

project(headerFile)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

add_executable(${PROJECT_NAME}
               ${CMAKE_CURRENT_SOURCE_DIR}/main.cpp
               ${CMAKE_CURRENT_SOURCE_DIR}/fillArray.cpp)

set_property(TARGET ${PROJECT_NAME} PROPERTY CXX_STANDARD 20 COMPILE_OPTIONS)