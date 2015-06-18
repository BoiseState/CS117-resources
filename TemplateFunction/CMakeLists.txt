cmake_minimum_required(VERSION 3.2)
project(TemplateFunction)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(TemplateFunction ${SOURCE_FILES})