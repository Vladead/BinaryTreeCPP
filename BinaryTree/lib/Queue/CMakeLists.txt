cmake_minimum_required(VERSION 3.15)

project(Queue)

set(SOURCES Queue.cpp Element.cpp)
set(HEADERS Queue.h Element.h)

add_library(Queue STATIC ${SOURCES} ${HEADERS})