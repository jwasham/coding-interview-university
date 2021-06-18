cmake_minimum_required(VERSION 3.10)

add_subdirectory(arrays)
add_subdirectory(lib/googletest) # add googletest subdirectory

include_directories(googletest/include) # this is so we c