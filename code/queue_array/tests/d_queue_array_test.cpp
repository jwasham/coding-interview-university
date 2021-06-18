#include <iostream>
#include <gtest/gtest.h>
#include "d_queue_array.cpp"
#include "d_queue_array.h"

namespace {
    class EnqueueDequeueTest: public ::testing::Test {};

    TEST_F(EnqueueDequeueTest, TestEnqueueDequeue) {
        DI::DQueueArray<int> Queue(10);

        Queue.Enqueue(22);

        EXPECT_EQ(Queue.Dequeue(), 22);
        EXPECT_TRUE(Queue.IsEmpty());
    }
}