#include <memory>

#pragma once
#ifndef DQUEUEARRAY_H
#define DQUEUEARRAY_H

namespace DI 
{
    template<class DataType>
    class DQueueArray
    {
    public:
        DQueueArray(size_t size_);
        DQueueArray (const DQueueArray &) = delete;
        DQueueArray &operator=(const DQueueArray &) = delete;

        void Enqueue(DataType Key);
        DataType Dequeue();
        bool IsEmpty() const;
        // bool IsFull() const;
    private:
        size_t size_ = 5ul;
        DataType* index_read;
        DataType* index_write;
        DataType* data_;
    };
}
#endif //DQUEUEARRAY_H


