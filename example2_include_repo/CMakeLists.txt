cmake_minimum_required(VERSION 3.10.2)

project(person)

include_directories(include)

file(GLOB SRC src/*cpp)

add_executable(main ${SRC})
