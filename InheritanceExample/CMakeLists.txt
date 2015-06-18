cmake_minimum_required(VERSION 3.2)
project(InheritanceExample)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(InheritanceExample ${SOURCE_FILES} Person.cpp Person.h MilitaryMember.cpp MilitaryMember.h Student.cpp Student.h)