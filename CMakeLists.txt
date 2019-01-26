cmake_minimum_required(VERSION 3.12)
project(MyCppNote)

set(CMAKE_CXX_STANDARD 14)

add_executable(mainproject main.cpp Myclass.h stock00.cpp Myclass.cpp tabtenn0.h tabtenn0.cpp exc_mean.h)
add_executable(filetest Codes/filetest.cpp)