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
        size_t size_ = 0;

        auto *CurrentPositionPtr = Head;

        while (CurrentPositionPtr)
        {
            size_++;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        return size_;
    }

    template<class DataType>
    bool DList<DataType>::IsEmpty() const
    {
        return Head == nullptr;
    }

    template<class DataType>
    const DataType DList<DataType>::At(size_t Index) const
    {
        auto *CurrentPositionPtr = Head;

        for (size_t i = 0; i < Index && CurrentPositionPtr != nullptr; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        if (CurrentPositionPtr == nullptr)
        {
            std::cerr << "Out of bounds" << std::endl;
            exit(EXIT_FAILURE);
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
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

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

        if (IsEmpty())
        {
            Head = new DNode<DataType>(Value);
            return;
        }

        while (CurrentPositionPtr->Next)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        CurrentPositionPtr->Next = new DNode<DataType>(Value);
    }

    template<class DataType>
    const DataType DList<DataType>::PopBack()
    {
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

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
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

        return Head->Value;
    }

    template<class DataType>
    const DataType DList<DataType>::Back() const
    {
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

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
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

        auto *CurrentPositionPtr = Head;
        DNode<DataType> *PrevPositionPtr = nullptr;

        for (size_t i = 0; i < Index && CurrentPositionPtr != nullptr; ++i)
        {
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        if (CurrentPositionPtr == nullptr)
        {
            std::cerr << "Out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }

        auto *NodeToAdd = new DNode<DataType>(Value, CurrentPositionPtr);

        PrevPositionPtr->Next = NodeToAdd;
    }

    template<class DataType>
    void DList<DataType>::Erase(size_t Index)
    {
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

        auto *CurrentPositionPtr = Head;
        DNode<DataType> *PrevPositionPtr = nullptr;

        for (size_t i = 0; i < Index && CurrentPositionPtr != nullptr; ++i)
        {
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        if (CurrentPositionPtr == nullptr)
        {
            std::cerr << "Out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }

        PrevPositionPtr->Next = CurrentPositionPtr->Next;

        delete CurrentPositionPtr;
    }

    template<class DataType>
    const DataType DList<DataType>::ValueNFromEnd(size_t N)
    {
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

        auto *CurrentPositionPtr = Head;

        size_t RequieredIndex = GetSizeOf() - N;

        for (size_t i = 0; i < RequieredIndex && CurrentPositionPtr != nullptr; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        if (CurrentPositionPtr == nullptr)
        {
            std::cerr << "Out of bounds" << std::endl;
            exit(EXIT_FAILURE);
        }

        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::Reverse()
    {
        auto *CurrentPositionPtr = Head;
        DNode<DataType> *NextPositionPtr = nullptr;
        DNode<DataType> *PrevPositionPtr = nullptr;

        while (CurrentPositionPtr)
        {
            NextPositionPtr = CurrentPositionPtr->Next;
            CurrentPositionPtr->Next = PrevPositionPtr;
            PrevPositionPtr = CurrentPositionPtr;
            CurrentPositionPtr = NextPositionPtr;
        }

        Head = PrevPositionPtr;
    }

    template<class DataType>
    void DList<DataType>::RemoveValue(DataType Value)
    {
        if (IsEmpty())
        {
            std::cerr << "List is empty" << std::endl;
            exit(EXIT_FAILURE);
        }

        auto *CurrentPositionPtr = Head;
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