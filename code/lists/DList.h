#pragma once
#include <cstdint>
#include <memory>
namespace DI
{
    class DList
    {
        public:
            DList();
            std::int64_t Size();
            bool IsEmpty();
            std::int64_t At(std::int64_t Index);
            void PushFront(std::int64_t Value);
            std::int64_t PopFront();
            void PushBack(std::int64_t Valuel);
            std::int64_t PopBack();
            std::int64_t Front();
            std::int64_t Back();
            void Insert(std::int64_t Index, std::int64_t Value);
            void Erase(std::int64_t Index);
            std::int64_t ValueNFromEnd(std::int64_t N);
            void Reverse();
            void RemoveValue(std::int64_t Value);

        private:
            struct ANode
            {
                std::int64_t Value = 0;
                std::unique_ptr<struct ANode> Next = nullptr;
            };

            std::unique_ptr<struct ANode> AddNode(std::int64_t Value, std::unique_ptr<struct ANode> NextPtr);
            std::unique_ptr<struct ANode> Head;
            std::unique_ptr<struct ANode> Tail;
            std::int64_t Size = 0;
    };
}