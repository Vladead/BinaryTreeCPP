cmake_minimum_required(VERSION 3.15)

project(MainApp)

set(SOURCE main.cpp)

add_executable(MainApp ${SOURCE})

include_directories(../BinaryTreeLib)
target_link_libraries(MainApp BinaryTreeLib)