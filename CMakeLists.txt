cmake_minimum_required(VERSION 3.5)
project(NEEPAlgorithm)

set(CMAKE_CXX_STANDARD 14)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
include_directories(${PROJECT_SOURCE_DIR}/inc)

add_subdirectory(${PROJECT_SOURCE_DIR}/src)
