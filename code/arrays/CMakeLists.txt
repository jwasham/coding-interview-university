cmake_minimum_required(VERSION 3.10)

project(arrays_proj)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_definitions(-std=c++17)
add_definitions(-Werror) # stop compile on warning

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -D_GLIBCXX_DEBUG")

set(HEADER_FILES
    d_vector.h
    d_vector_test.h
    )

set(SOURCE_FILES
    d_vector.cpp
    main.cpp
    )

enable_testing()

include_directories(googletest/include)

add_executable(arrays ${SOURCE_FILES})
add_executable(vector_test d_vector_test.cpp d_vector.cpp)

target_link_libraries(vector_test gtest gtest_main)