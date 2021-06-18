cmake_minimum_required(VERSION 3.10)

project(list_tail_lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(-std=c++17)
add_definitions(-Werror) # stop compile on warning

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")

set(HEADER_FILES
    d_node.h
    d_list_tail.h
    )

set(SOURCE_FILES
    d_list_tail.cpp
    )

add_library(list_tail_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})