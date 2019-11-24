cmake_minimum_required(VERSION 3.15)

project(Test)

add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
set(SOURCE main.cpp BinaryTreeTest.cpp)
add_executable(Test ${SOURCE})
target_link_libraries(Test gtest)

include_directories(../BinaryTree)
target_link_libraries(Test BinaryTree)