#include "d_queue_list.h"

namespace DI
{
    // template<class DataType>
    // DQueueList<DataType>::DQueueList()
    // {
    //     ForwardList = DList<DataType>();
    // }

    template<class DataType>
    void DQueueList<DataType>::Enqueue(DataType Key)
    {
        ForwardList.PushBack(Key);
    }

    template<class DataType>
    DataType DQueueList<DataType>::Dequeue()
    {
        return ForwardList.PopFront();
    }

    template<class DataType>
    bool  DQueueList<DataType>::IsEmpty()
    {
        return ForwardList.IsEmpty();
    }
}