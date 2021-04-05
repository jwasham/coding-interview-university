#include "DNode.h"
#include <stdlib.h>

#pragma once
#ifndef DLIST_H
#define DLIST_H
namespace DI
{
    template<class DataType>
    class DList
    {
        public:
            explicit DList() : Head{ nullptr } {}
            ~DList();
            DList(const DList &) = delete;
            DList &operator=(const DList &) = delete;
            
            const size_t GetSizeOf() const;
            bool IsEmpty() const;
            //Zero based Index
            const DataType At(size_t Index) const;
            void PushFront(DataType Value);
            const DataType PopFront();
            void PushBack(DataType Value);
            const DataType PopBack();
            const DataType Front() const;
            const DataType Back() const;
            void Insert(size_t Index, DataType Value);
            void Erase(size_t Index);
            const DataType ValueNFromEnd(size_t N);
            void Reverse();
            void RemoveValue(DataType Value);

        private:
            DNode<DataType> *Head;
    };
}
#endif //DLIST_H