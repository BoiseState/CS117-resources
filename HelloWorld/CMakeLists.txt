# cmake_minimum_required(VERSION <specify CMake version here>)
project(HelloWorld)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(HelloWorld ${SOURCE_FILES})