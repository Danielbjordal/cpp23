cmake_minimum_required(VERSION 3.26)
project(Assignment1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++1y -Wall -Wextra")

add_executable(taskA task_a.cpp)
add_executable(taskB task_b.cpp)
