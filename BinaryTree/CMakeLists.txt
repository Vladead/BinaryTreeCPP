cmake_minimum_required(VERSION 3.15)

project(BinaryTree)

set(SOURCES BinaryTree.cpp DFT_Iterator.cpp  BFT_Iterator.cpp Node.cpp)
set(HEADERS BinaryTree.h DFT_Iterator.h BFT_Iterator.h Iterator.h Node.h)

add_subdirectory(lib/Stack)
add_subdirectory(lib/Queue)

include_directories(lib/Stack)
include_directories(lib/Queue)

add_library(BinaryTree STATIC ${SOURCES} ${HEADERS})

target_link_libraries(BinaryTree Stack)
target_link_libraries(BinaryTree Queue)