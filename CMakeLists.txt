cmake_minimum_required(VERSION 3.5)
project(PROYECTOBT)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp TriangleZone.cpp TriangleZone.h TriangleZone.cpp)
add_executable(PROYECTOBT ${SOURCE_FILES})