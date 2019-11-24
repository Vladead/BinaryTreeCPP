cmake_minimum_required(VERSION 3.15)

project(BinaryTree)

set(SOURCES BinaryTree.cpp DFT_Iterator.cpp  BFT_Iterator.cpp Node.cpp Stack.cpp SElement.cpp)
set(HEADERS BinaryTree.h DFT_Iterator.h BFT_Iterator.h Iterator.h Node.h Stack.h SElement.h)

add_library(BinaryTree STATIC ${SOURCES} ${HEADERS})