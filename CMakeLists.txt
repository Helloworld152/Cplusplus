cmake_minimum_required(VERSION 3.12)
project(untitled)

set(CMAKE_CXX_STANDARD 98)

add_executable(untitled main.cpp Myclass.h stock00.cpp Myclass.cpp)
add_executable(test  Codes/hello.cpp)