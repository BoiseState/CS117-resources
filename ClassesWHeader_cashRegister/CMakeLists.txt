cmake_minimum_required(VERSION 3.2)
project(ClassesWHeader_cashRegister)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(ClassesWHeader_cashRegister ${SOURCE_FILES} CashRegister.h CashRegister.cpp)