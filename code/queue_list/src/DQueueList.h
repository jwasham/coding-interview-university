#include "../../../lists/Tail/src/DListTail.cpp"
#include "../../../lists/Tail/src/DListTail.h"

#pragma once
#ifndef DQUEUELIST_H
#define DQUEUELIST_H
namespace DI
{
    template<class DataType>
    class DQueueList
    {
    public:
        explicit DQueueList() {}
        DQueueList (const DQueueList &) = delete;
        DQueueList &operator=(const DQueueList &) = delete;

        void Enqueue(DataType Key);
        DataType Dequeue();
        bool IsEmpty();
    private:
        DList<DataType> ForwardList {};
    };
}
#endif //DQUEUELIST_H