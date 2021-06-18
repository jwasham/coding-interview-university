cmake_minimum_required(VERSION 3.10)

add_subdirectory(arrays)
add_subdirectory(list_tail)
add_subdirectory(queue_list)
add_subdirectory(queue_array)
add_subdirectory(lib/googletest) # add googletest subdirectory

include_directories(googletest/include)
include_directories(list_tail/src)