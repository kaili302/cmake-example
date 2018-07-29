cmake_minimum_required(VERSION 3.10.2)

project(app)

set(LIBS libperson.so)
link_directories(libperson_repo)

include_directories(libperson_repo/include)

add_executable(main main.cpp)

target_link_libraries(main ${LIBS})

