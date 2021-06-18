#include "DQueueArray.h"

namespace DI
{
    template<class DataType>
    DQueueArray<DataType>::DQueueArray(size_t GivenSize)
    {
        size_ = GivenSize;
        data_ = new DataType[size_];
        IndexRead = data_[0];
        IndexWrite = data_[0];
    }

    template<class DataType>
    DQueueArray<DataType>::~DQueueArray()
    {

    }

    template<class DataType>
    void DQueueArray<DataType>::Enqueue(DataType Key)
    {
        IndexWrite* = Key;
        
    }
}
