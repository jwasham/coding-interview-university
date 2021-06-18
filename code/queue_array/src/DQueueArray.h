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
        ~DQueueArray();

        void Enqueue(DataType Key);
    private:
        DataType[] data_;
        size_t GivenSize = 0ul;
        DataType *IndexRead;
        DataType *IndexWrite;
    };
}
#endif //DQUEUEARRAY_H


