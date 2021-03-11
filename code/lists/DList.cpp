#include "DList.h"

namespace DI
{
    DList::DList()
    {
        // Create empty List
        Head = nullptr;
    }

    std::int64_t DList::Size()
    {
        return Size;
    }

    bool DList::IsEmpty()
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

    std::int64_t DList::At(int64_t Index)
    {
        auto CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(Head);

        for (std::int64_t i = 0; i <= Index; i++)
        {
            CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(CurrentPositionPtr->get()->Next);
        }

        std::int64_t Result = CurrentPositionPtr->get()->Value;

        return Result;
    }


    void DList::PushFront(std::int64_t Value)
    {
        auto TempPtr = std::make_unique<ANode>(Value, Head);

        Head = std::move(TempPtr);
        Size++;
    }

    std::int64_t DList::PopFront()
    {
        std::int64_t Result = Head->Value;

        Head = std::move(Head->Next);
        Size--;

        return Result;
    }

    void DList::PushBack(std::int64_t Value)
    {
        auto TempPtr = std::make_unique<ANode>(Value);

        auto CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(Head);

        for (std::int64_t i = 0; i < Size; i++)
        {
            CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(CurrentPositionPtr->get()->Next);
        }

        //verify that Next == nullptr means that it's certainly the end
        CurrentPositionPtr->get()->Next = std::move(TempPtr);
    }

    std::int64_t DList::PopBack()
    {
        auto CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(Head);

        for (std::int64_t i = 0; i < Size - 1; i++)
        {
            CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(CurrentPositionPtr->get()->Next);
        }

        std::int64_t Result = CurrentPositionPtr->get()->Next->Value;
        
        CurrentPositionPtr->get()->Next = std::move(nullptr);

        return Result;
    }

    std::int64_t DList::Front()
    {
        return Head->Value;
    }

    std::int64_t DList::Back()
    {
        auto CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(Head);

        for (std::int64_t i = 0; i < Size; i++)
        {
            CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(CurrentPositionPtr->get()->Next);
        }

        //verify that Next == nullptr means that it's certainly the end
        std::int64_t Result = CurrentPositionPtr->get()->Value;

        return Result;
    }

    void DList::Insert(std::int64_t Index, std::int64_t Value)
    {
        auto TempPtr = std::make_unique<ANode>(Value);

        auto CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(Head);

        for (std::int64_t i = 0; i < Index; i++)
        {
            CurrentPositionPtr = std::make_unique<std::unique_ptr<ANode>>(CurrentPositionPtr->get()->Next);
        }

        TempPtr->Next = std::move(CurrentPositionPtr->get()->Next->Next);

        CurrentPositionPtr->get()->Next->Next = std::move(TempPtr);
    }
}