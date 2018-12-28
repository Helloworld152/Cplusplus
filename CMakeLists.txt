cmake_minimum_required(VERSION 3.12)
project(MyCppNote)

set(CMAKE_CXX_STANDARD 98)

add_executable(mainproject main.cpp Myclass.h stock00.cpp Myclass.cpp)
add_executable(filetest Codes/filetest.cpp)