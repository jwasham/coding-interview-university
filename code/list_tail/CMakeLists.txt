cmake_minimum_required(VERSION 3.10)

project(list_tail_proj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(-std=c++17)
add_definitions(-Werror) # stop compile on warning

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")

set(SOURCE_FILES main.cpp)
add_executable(list_tail ${SOURCE_FILES})

include_directories(src)

add_subdirectory(src)

target_link_libraries(list_tail list_tail_lib)