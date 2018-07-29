cmake_minimum_required(VERSION 3.10.2)

project(person)

include_directories(include)

set(SRC src/person.cpp)

set(CMAKE_BUILD_TYPE Release)

add_library(person SHARED ${SRC})

install(TARGETS person DESTINATION ./)

