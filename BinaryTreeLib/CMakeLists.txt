cmake_minimum_required(VERSION 3.15)

project(BinaryTreeLib)

set(SOURCES BinaryTree.cpp)
set(HEADERS BinaryTree.h)

add_library(BinaryTreeLib STATIC ${SOURCES} ${HEADERS})