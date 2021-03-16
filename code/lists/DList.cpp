#include "DList.h"

namespace DI
{
    template<class DataType>
    DList<DataType>::DList()
    {
        // Create empty List
        Head = nullptr;
    }

    template<class DataType>
    DList<DataType>::~DList()
    {
        //TODO delete all pointers in nodes
    }

    template<class DataType>
    std::int64_t DList<DataType>::GetSizeOf()
    {
        return Size;
    }

    template<class DataType>
    bool DList<class DataType>::IsEmpty()
    {
        if (Size == 0 && Head == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    template<class DataType>
    DataType DList<DataType>::At(int64_t Index) const
    {
        DNode<DataType> *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i <= Index; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<class DataType>::PushFront(std::int64_t Value)
    {
        DNode<DataType> *CurrentPositionPtr = DNode(Value, Head);

        Head = CurrentPositionPtr;
        Size++;
    }

    template<class DataType>
    DataType DList<DataType>::PopFront()
    {
        DataType Result = Head->Value;

        DNode<DataType> *NodeToDelete = Head;

        Head = Head->Next;
        Size--;

        delete NodeToDelete;

        return Result;
    }

    template<class DataType>
    void DList<DataType>::PushBack(DataType Value)
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Size; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        //verify that Next == nullptr means that it's certainly the end
        CurrentPositionPtr->Next = ANode<DataType>(Value);
    }

    template<class DataType>
    DataType DList<DataType>::PopBack()
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Size - 1; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        DataType Result = CurrentPositionPtr->Next->Value;
        
        delete CurrentPositionPtr->Next;

        CurrentPositionPtr->Next = nullptr;

        return Result;
    }
    
    template<class DataType>
    DataType DList<DataType>::Front()
    {
        return Head->Value;
    }

    template<class DataType>
    DataType DList<DataType>::Back()
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Size; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        //verify that Next == nullptr means that it's certainly the end
        
        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::Insert(std::int64_t Index, DataType Value)
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Index; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        DNode<DataType> NodeToAdd(Value, CurrentPositionPtr->Next->Next);

        CurrentPositionPtr->Next = *NodeToAdd;
    }

    template<class DataType>
    void DList<DataType>::Erase(std::int64_t Index)
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Index; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        DNode<DataType> *NodeToDelete = CurrentPositionPtr->Next;

        CurrentPositionPtr->Next = CurrentPositionPtr->Next->Next;

        delete NodeToDelete;
    }

    template<class DataType>
    DataType DList<DataType>::ValueNFromEnd(std::int64_t N)
    {
        auto *CurrentPositionPtr = Head;

        std::int64_t RequieredIndex = Size - N; // ???

        for (std::int64_t i = 0; i <= RequieredIndex; i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;;
        }

        return CurrentPositionPtr->Value;
    }

    template<class DataType>
    void DList<DataType>::Reverse()
    {
        auto *CurrentPositionPtr = Head;

        //TODO change to while... may be
        for (std::int64_t i = 0; i < (Size - 1); i++)
        {
            CurrentPositionPtr = CurrentPositionPtr->Next;
        }

        Head = CurrentPositionPtr->Next;
    }

    template<class DataType>
    void DList<DataType>::RemoveValue(DataType Value)
    {
        auto *CurrentPositionPtr = Head;

        for (std::int64_t i = 0; i < Size; i++)
        {
            if (CurrentPositionPtr->Value == Value)
            {
                Erase(i);
                break;
            }

            CurrentPositionPtr = CurrentPositionPtr->Next;
        }
    }
}