cmake_minimum_required(VERSION 3.15)

project(Stack)

set(SOURCES Stack.cpp Element.cpp)
set(HEADERS Stack.h Element.h)

add_library(Stack STATIC ${SOURCES} ${HEADERS})