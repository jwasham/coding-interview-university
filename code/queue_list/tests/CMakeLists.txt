project(queue_list_test)

include_directories(googletest/include)

enable_testing()

add_executable(queue_list_test d_queue_list_test.cpp)

target_link_libraries(queue_list_test gtest gtest_main)
target_link_libraries(queue_list_test queue_list_lib)