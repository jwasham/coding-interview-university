project(queue_array_test)

include_directories(googletest/include)

enable_testing()

add_executable(queue_array_test d_queue_array_test.cpp)

target_link_libraries(queue_array_test gtest gtest_main)
target_link_libraries(queue_array_test queue_array_lib)