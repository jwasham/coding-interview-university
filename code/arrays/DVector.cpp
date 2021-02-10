#include "DVector.h"
#include "iostream"
namespace DI 
{
    DVector::DVector(std::int64_t InitCapacity)
    {
        //TODO Validate Capacity before allocating memory

        CurrentCapacity = InitCapacity;
        Size = 0;
        Data = std::unique_ptr<std::int64_t[]>(new std::int64_t[CurrentCapacity]);

    }

    std::int64_t DVector::GetSizeOf()
    {
        return Size;
    }

    bool DVector::IsEmpty()
    {
        return Size == 0;
    }

    std::int64_t DVector::At(std::int64_t Index)
    {
        //TODO Validate if Index out of bounds
        return Data[Index];
    }

    std::int64_t DVector::GetCapacity()
    {
        return CurrentCapacity;
    }
 
    void DVector::PushBack(std::int64_t Value)
    {
        Resize(Size + 1);
        Data[Size] = Value;
        ++Size;
    }

    void DVector::Resize(std::int64_t NewCapacity)
    {
        if(NewCapacity >= CurrentCapacity)
        {
            DoGrowth(NewCapacity);
        }  
        else if(NewCapacity <= (CurrentCapacity / 4))
        {    
            DoShrink(NewCapacity);
        }
    }

    // std::int64_t DVector::Pop()
    // {
        
    // }

    std::int64_t DVector::Find(std::int64_t Value)
    {
        std::int64_t ResultIndex = -1;

        for (std::int64_t i = 0; i < Size; ++i)
        {
            if (Data[i] == Value)
            {
                ResultIndex = i;
                break;
            }
        }

        return ResultIndex;
    }

    void DVector::Delete(std::int64_t Index)
    {
        for (std::int64_t i = Index; i < Size; ++i)
        {
            Data[i] = Data[i + 1];
        }

        Resize(Size - 1);
        --Size;
    }

    void DVector::DoGrowth(std::int64_t GrowthCapacity)
    {   
        //TODO add growth factor
        std::unique_ptr<std::int64_t[]> NewData (new std::int64_t[GrowthCapacity * 2]);

        for(std::int64_t i = 0; i < Size; i++)
        {
            NewData[i] = Data[i];
        }

        CurrentCapacity = CurrentCapacity + GrowthCapacity * 2;
        Data = std::move(NewData);
    }

        void DVector::DoShrink(std::int64_t ShrinkCapacity )
    {   
        //TODO add shrink factor

        std::unique_ptr<std::int64_t[]> NewData (new std::int64_t[ShrinkCapacity / 2]);

        for(std::int64_t i = 0; i < Size; i++)
        {
            NewData[i] = Data[i];
        }

        CurrentCapacity = CurrentCapacity - ShrinkCapacity / 2;
        Data = std::move(NewData);
    }
}