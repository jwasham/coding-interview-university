#include "DList.h"
#pragma once
// #ifndef _DLIST_CPP_ 
// #define _DLIST_CPP_

namespace DI
{
    template<class DataType>
    DList<DataType>::~DList()
    {   
        auto *CurrentPositionPtr = Head;
        DNode<DataType> *NextPositionPtr = nullptr;

        while (CurrentPositionPtr)
        {
            NextPositionPtr = CurrentPositionPtr->Next;
            delete CurrentPositionPtr;
            CurrentPositionPtr = NextPositionPtr;
        }
    }

    template<class DataType>
    const size_t DList<DataType>::GetSizeOf() const
    {
        size_t Size = 0;

        auto *CurrentPositionPtr = Head;

        while (CurrentPositionPtr)
        {   
            Size++;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }
        
        return Size;
    }

    template<class DataType>
    bool DList<DataType>::IsEmpty() const
    {
        return Head == nullptr;
    }

    template<class DataType>
    const DataType DList<DataType>::At(size_t Index) const
    {
        auto *CurrentPositionPtr = Head; // head must not be nullptr

        for (size_t i = 0; i <= Index && CurrentPositionPtr->Next != nullptr; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::PushFront(DataType Value)
    {
        auto *NodeToAdd = new DNode<DataType>(Value, Head);

        Head = NodeToAdd;
    }

    template<class DataType>
    const DataType DList<DataType>::PopFront()
    {
        DataType Result = Head->Value;

        auto *NodeToDelete = Head;

        Head = Head->Next;

        delete NodeToDelete;

        return Result;
    }

    template<class DataType>
    void DList<DataType>::PushBack(DataType Value)
    {
        auto *CurrentPositionPtr = Head;
        while(CurrentPositionPtr->Next)
        {   
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        //verify that Next == nullptr means that it's certainly the end
        CurrentPositionPtr->Next = new DNode<DataType>(Value);
    }

    template<class DataType>
    const DataType DList<DataType>::PopBack()
    {
        auto *CurrentPositionPtr = Head;
        DNode<DataType> *PrevPositionPtr = nullptr;

        while (CurrentPositionPtr->Next)
        {
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        DataType Result = CurrentPositionPtr->Value;
        
        delete CurrentPositionPtr;

        PrevPositionPtr->Next = nullptr;

        return Result;
    }
    
    template<class DataType>
    const DataType DList<DataType>::Front() const
    {
        return Head->Value;
    }

    template<class DataType>
    const DataType DList<DataType>::Back() const
    {
        auto *CurrentPositionPtr = Head;

        while (CurrentPositionPtr->Next)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }
        
        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::Insert(size_t Index, DataType Value)
    {
        auto *CurrentPositionPtr = Head; // must not be nullptr
        DNode<DataType> *PrevPositionPtr = nullptr;

        for (size_t i = 0; i < Index && CurrentPositionPtr != nullptr; ++i)
        {
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        auto *NodeToAdd = new DNode<DataType>(Value, CurrentPositionPtr->Next->Next);

        CurrentPositionPtr->Next = NodeToAdd;

        //TODO check insert to front\end behavior
    }

    template<class DataType>
    void DList<DataType>::Erase(size_t Index)
    {
        auto *CurrentPositionPtr = Head; // must not be nullptr
        DNode<DataType> *PrevPositionPtr = nullptr;

        for (size_t i = 0; i <= Index; ++i)
        {
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        PrevPositionPtr->Next = CurrentPositionPtr->Next;

        delete CurrentPositionPtr;
    }

    template<class DataType>
    const DataType DList<DataType>::ValueNFromEnd(size_t N)
    {
        auto *CurrentPositionPtr = Head;

        size_t RequieredIndex = GetSizeOf() - N; // ???

        for (size_t i = 0; i <= RequieredIndex && CurrentPositionPtr != nullptr; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::Reverse()
    {
        auto *CurrentPositionPtr = Head;

        while (CurrentPositionPtr->Next)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        Head = CurrentPositionPtr;
    }

    template<class DataType>
    void DList<DataType>::RemoveValue(DataType Value)
    {
        auto *CurrentPositionPtr = Head; // must not be nullptr
        DNode<DataType> *PrevPositionPtr = nullptr;

        while (CurrentPositionPtr->Next)
        {
            if (CurrentPositionPtr->Value == Value) break;

            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        PrevPositionPtr->Next = CurrentPositionPtr->Next;

        delete CurrentPositionPtr;
    }
}
// #endif //_DLIST_CPP_