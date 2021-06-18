cmake_minimum_required(VERSION 3.10)

project(queue_array_lib)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(-std=c++17)
add_definitions(-Werror) # stop compile on warning

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")

set(HEADER_FILES
    d_queue_array.h
    )

set(SOURCE_FILES
    d_queue_array.cpp
    )

add_library(queue_array_lib STATIC ${SOURCE_FILES} ${HEADER_FILES})