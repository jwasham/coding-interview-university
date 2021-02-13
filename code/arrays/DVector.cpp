#include "DVector.h"
#include "iostream"
namespace DI 
{
    DVector::DVector(std::int64_t InitCapacity)
    {
        if(InitCapacity > 0)
        {
            CurrentCapacity = InitCapacity;
            Size = 0;
            Data = std::unique_ptr<std::int64_t[]>(new std::int64_t[CurrentCapacity]);
        }
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
        try
        {
            return Data[ValidateIndex(Index)];
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            throw;
        }    
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



    std::int64_t DVector::ValidateIndex(std::int64_t Index)
    {
        return (Index >= Size || Index < 0) ? throw std::out_of_range("Out of range") : Index;
    }

    std::int64_t DVector::Pop()
    {
        std::int64_t Result = Data[Size - 1];

        --Size;

        Resize(Size);

        return Result;
    }

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
        // last index delete
        try
        {
            std::int64_t i = ValidateIndex(Index);

            if (i == (Size - 1))
            {
                Pop();
            } 
            else
            {
                for (i; i < Size; ++i)
                {
                    Data[i] = Data[i + 1];
                }

                Resize(Size - 1);
                --Size;
            }

        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
            throw;
        }
    }

    void DVector::Remove(std::int64_t Value)
    {
        //last index delete
        for (std::int64_t i = 0; i < Size; i++)
        {
            if (Data[i] == Value)
            {
                std::cout << "Check " << Data[i] << "Value: " << Value << "Size: "<< Size <<  std::endl;
                Delete(i);
            }
        }
    }

    void DVector::Insert(std::int64_t Index, std::int64_t Value)
    {
        try
        {   
            std::int64_t Validated = ValidateIndex(Index);
            Resize(Size + 1);
                    
            for (std::int64_t i = Size - 1; i >= Validated; --i)
            {
                Data[i + 1] = Data[i];

                if (i == Validated)
                {
                    Data[i] = Value;
                }
            }
            ++Size;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }

    void DVector::Prepend(std::int64_t Value)
    {
        Insert(0, Value);
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
    void DVector::DoGrowth(std::int64_t GrowthCapacity)
    {   
        //TODO add growth factor
        std::unique_ptr<std::int64_t[]> NewData (new std::int64_t[GrowthCapacity * 2]);

        for(std::int64_t i = 0; i < Size; ++i)
        {
            NewData[i] = Data[i];
        }

        CurrentCapacity = CurrentCapacity + GrowthCapacity * 2;
        Data = std::move(NewData);
    }

    void DVector::DoShrink(std::int64_t ShrinkCapacity)
    {   
        //TODO add shrink factor

        std::unique_ptr<std::int64_t[]> NewData (new std::int64_t[ShrinkCapacity / 2]);

        for(std::int64_t i = 0; i < Size; ++i)
        {
            NewData[i] = Data[i];
        }

        CurrentCapacity = CurrentCapacity - ShrinkCapacity / 2;
        Data = std::move(NewData);
    }
}