#include <iostream>
#include <gtest/gtest.h>
#include "d_queue_list.cpp"
#include "d_queue_list.h"

namespace {
    class EnqueueDequeueTest: public ::testing::Test {};

    TEST_F(EnqueueDequeueTest, TestEnqueueDequeue) {
        DI::DQueueList<int> Queue;

        int ItemsToAdd = 10;

        for (int i = 0; i < ItemsToAdd; ++i)
        {
            Queue.Enqueue(10 + i);
        }

        for (int i = 0; i < ItemsToAdd; ++i)
        {
            //std::cout << Queue.Dequeue() << std::endl;
            EXPECT_EQ(Queue.Dequeue(), 10 + i);
        }

        EXPECT_EQ(Queue.IsEmpty(), true);
    }

}