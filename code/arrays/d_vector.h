#pragma once
#include <cstdint>
#include <memory>

//TODO Implement an automatically resizing vector
namespace DI 
{
    class DVector
    {
        public:
            DVector(std::int64_t capacity);

            std::int64_t GetSizeOf();

            //number of items vector can hold
            std::int64_t GetCapacity();

            bool IsEmpty();

            std::int64_t At(std::int64_t index);

            void PushBack(std::int64_t value);

            std::int64_t Pop();

            void Delete(std::int64_t index);

            std::int64_t Find(std::int64_t value);

            void Remove(std::int64_t value);

            void Insert(std::int64_t index, std::int64_t value);

            void Prepend(std::int64_t value);
            
        private:
            void Resize(std::int64_t new_capacity);
            void DoGrowth(std::int64_t new_capacity);
            void DoShrink(std::int64_t new_capacity);
            void ValidateIndex(std::int64_t index);

        private:
           std::unique_ptr<std::int64_t[]> data_;
           std::int64_t current_capacity_ = 16; //default capacity
           std::int64_t size_ = 0;
    };
}