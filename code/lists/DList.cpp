#include "DList.h"

namespace DI
{
    DList::DList()
    {
        // Create empty List
        Head = nullptr;
        Tail =  nullptr;
    }

    std::int64_t DList::Size()
    {
        return Size;
    }

    bool DList::IsEmpty()
    {
        if (Size == 0 && Head == nullptr && Tail == nullptr)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    std::int64_t At(int64_t Index)
    {
        std::unique_ptr<struct DList::ANode> CurrentPositionPtr = std::move(Head);

        for (std::int64_t i = 0; i < Index; i++)
        {
            CurrentPositionPtr = std::move(CurrentPositionPtr->Next);
        }

        std:int64_t Result = CurrentPositionPtr->Value;

        return Result;
    }

    std::unique_ptr<struct DList::ANode> DList::AddNode(std::int64_t Value, std::unique_ptr<struct DList::ANode> NextPtr)
    {
        std::unique_ptr<struct DList::ANode> ptr (new DList::ANode);

        ptr->Value = Value;
        ptr->Next = std::move(NextPtr);
        Size++;

        return ptr;
    }

    
}