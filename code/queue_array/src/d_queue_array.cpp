#include "d_queue_array.h"

namespace DI
{
    template<class DataType>
    DQueueArray<DataType>::DQueueArray(size_t size_) {
        size_ = size_;
        data_ = new DataType[size_];
        index_read = &data_[0];
        index_write = &data_[0];
    }

    template<class DataType>
    void DQueueArray<DataType>::Enqueue(DataType Key) {
        //TODO check is full
        *index_write = Key;
        ++index_write;
    }

    template<class DataType>
    DataType DQueueArray<DataType>::Dequeue() {
        //TODO check is empty
        DataType result = *index_read;
        ++index_read;
        return result;
    }

    template<class DataType>
    bool DQueueArray<DataType>::IsEmpty() const {
        return (index_write == index_read);
    }

    // template<class DataType>
    // bool DQueueArray<DataType>::IsFull() const {

    // }
}
