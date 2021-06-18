#include "DQueueListTest.h"
#include "../src/DQueueList.cpp"
#include "../src/DQueueList.h"
#include <iostream>
#include <cassert>

void DQueueListTest::RunTests()
{
    Test();
}

void DQueueListTest::Test()
{
    DI::DQueueList<int> Queue;

    int ItemsToAdd = 10;

    for (int i = 0; i < ItemsToAdd; ++i)
    {
        Queue.Enqueue(10 + i);
    }

    for (int i = 0; i < ItemsToAdd; ++i)
    {
        //std::cout << Queue.Dequeue() << std::endl;
        assert(Queue.Dequeue() == 10 + i);
    }

    assert(Queue.IsEmpty() == true);
}