#include "d_vector.h"
#include "iostream"
namespace DI 
{
    DVector::DVector(std::int64_t capacity) {
        if(capacity > 0) {
            current_capacity_ = capacity;
            size_ = 0;
            data_ = std::unique_ptr<std::int64_t[]>(new std::int64_t[current_capacity_]);
        }
    }

    std::int64_t DVector::GetSizeOf() {
        return size_;
    }

    bool DVector::IsEmpty() {
        return size_ == 0;
    }

    std::int64_t DVector::At(std::int64_t index) {
        //TODO Validate if Index out of bounds
        try
        {
            ValidateIndex(index);
            return data_[index];
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << '\n';
            throw;
        }    
    }

    std::int64_t DVector::GetCapacity() {
        return current_capacity_;
    }
 
    void DVector::PushBack(std::int64_t value) {
        Resize(size_ + 1);
        data_[size_] = value;
        ++size_;
    }

    void DVector::ValidateIndex(std::int64_t index) {
        if (index >= size_ || index < 0) {
            throw std::out_of_range("Out of range");
        } 
    }

    std::int64_t DVector::Pop() {
        std::int64_t result = data_[size_ - 1];

        --size_;

        Resize(size_);

        return result;
    }

    std::int64_t DVector::Find(std::int64_t value) {
        std::int64_t result_index = -1;

        for (std::int64_t i = 0; i < size_; ++i) {
            if (data_[i] == value) {
                result_index = i;
                break;
            }
        }

        return result_index;
    }

    void DVector::Delete(std::int64_t index) {
        // last index delete
        try
        {
            ValidateIndex(index);

            if (index == (size_ - 1)) {
                Pop();
            } 
            else {
                for (auto i = index; i < size_; ++i) {
                    data_[i] = data_[i + 1];
                }

                Resize(size_ - 1);
                --size_;
            }
        }
        catch(const std::exception& e) {
            std::cerr << e.what() << '\n';
            throw;
        }
    }

    void DVector::Remove(std::int64_t value) {
        //last index delete
        for (std::int64_t i = 0; i < size_; i++) {
            if (data_[i] == value) {
                // std::cout << "Check " << i << " Value: " << Value << " size_: "<< size_ <<  std::endl;
                Delete(i);
                --i; //one step back to not miss values
            }
        }
    }

    void DVector::Insert(std::int64_t index, std::int64_t value) {
        try
        {   
            ValidateIndex(index);
            Resize(size_ + 1);
                    
            for (std::int64_t i = size_ - 1; i >= index; --i) {
                data_[i + 1] = data_[i];

                if (i == index) {
                    data_[i] = value;
                }
            }
            ++size_;
        }
        catch (const std::exception& e) {
            std::cerr << e.what() << '\n';
        }
    }

    void DVector::Prepend(std::int64_t value) {
        Insert(0, value);
    }

    void DVector::Resize(std::int64_t new_capacity) {
        if(new_capacity >= current_capacity_) {
            DoGrowth(new_capacity);
        }  
        else if(new_capacity <= (current_capacity_ * 0.25f)) {    
            DoShrink(new_capacity);
        }
    }
    void DVector::DoGrowth(std::int64_t new_capacity) {   
        //TODO add growth factor
        std::int64_t growth_capacity = new_capacity * 2;
        std::unique_ptr<std::int64_t[]> new_data (new std::int64_t[growth_capacity]);

        for(std::int64_t i = 0; i < size_; ++i) {
            new_data[i] = data_[i];
        }

        data_ = std::move(new_data);
        current_capacity_ = growth_capacity;
    }

    void DVector::DoShrink(std::int64_t new_capacity) {   
        //TODO add shrink factor
        std::int64_t shrink_capacity = new_capacity * 0.5f;
        std::unique_ptr<std::int64_t[]> new_data (new std::int64_t[shrink_capacity]);

        for(std::int64_t i = 0; i < size_; ++i) {
            new_data[i] = data_[i];
        }

        data_ = std::move(new_data);
        current_capacity_ = shrink_capacity;
    }
}