#pragma once
#include "./DNode.h"
#include <cstdint>
#include <iostream>
#include <memory>

namespace DI
{
    template<class DataType>
    class DList
    {
        public:
            DList();
            ~DList();
            std::int64_t GetSizeOf();
            bool IsEmpty();
            DataType At(std::int64_t Index) const;
            void PushFront(std::int64_t Value);
            DataType PopFront();
            void PushBack(DataType Value);
            DataType PopBack();
            DataType Front();
            DataType Back();
            void Insert(std::int64_t Index, DataType Value);
            void Erase(std::int64_t Index);
            DataType ValueNFromEnd(std::int64_t N);
            void Reverse();
            void RemoveValue(DataType Value);

        private:
            DNode<DataType> *Head;
            std::int64_t Size = 0;
    };
}