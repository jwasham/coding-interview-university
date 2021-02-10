#include "DVector.h"
#include <iostream>

int main() 
{
    DI::DVector MyVector = DI::DVector(5);
    std::cout << MyVector.GetSizeOf() << MyVector.GetCapacity() << std::endl;

    MyVector.PushBack(10);
    MyVector.PushBack(12);
    MyVector.PushBack(13);
    MyVector.PushBack(14);
    MyVector.PushBack(15);
    MyVector.PushBack(16);
    MyVector.PushBack(17);

    std::cout << "Before del: "<< MyVector.At(3) << std::endl;
    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;
    std::cout << "Find 16: "<< MyVector.Find(16) << std::endl;
    MyVector.Delete(3);

    std::cout << "After del: " << MyVector.At(3) << std::endl;
    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;
    std::cout << "Find 16: "<< MyVector.Find(16) << std::endl;
    
    return EXIT_SUCCESS;
}