#pragma once
#include <cstdint>
#include <memory>

//TODO Implement an automatically resizing vector
namespace DI 
{
    class DVector
    {
        public:
            DVector(std::int64_t Capacity);

            std::int64_t GetSizeOf();

            //number of items vector can hold
            std::int64_t GetCapacity();

            bool IsEmpty();

            std::int64_t At(std::int64_t Index);

            void PushBack(std::int64_t Value);

            std::int64_t Pop();

            void Delete(std::int64_t Index);

            std::int64_t Find(std::int64_t Value);

            void Remove(std::int64_t Value);
            
        private:
            void Resize(std::int64_t NewCapacity);
            void DoGrowth(std::int64_t GrowthCapacity);
            void DoShrink(std::int64_t ShrinkCapacity);
            std::int64_t ValidateIndex(std::int64_t Index);

        private:
           std::unique_ptr<std::int64_t[]> Data;
           std::int64_t CurrentCapacity = 16; //default capacity
           std::int64_t Size = 0;
    };
}