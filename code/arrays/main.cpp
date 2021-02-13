#include "DVector.h"
#include <iostream>

int main() 
{
    DI::DVector MyVector = DI::DVector(5);
    std::cout << MyVector.GetSizeOf() << MyVector.GetCapacity() << std::endl;

    MyVector.PushBack(10);
    MyVector.PushBack(16);
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
    std::cout << "Pop: " << MyVector.Pop() << std::endl;
    std::cout << "After pop: " << std::endl;
    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;
    std::cout << "Before Delete: " << std::endl;
    for (int i = 0; i < MyVector.GetSizeOf(); i++)
    {
        std::cout << MyVector.At(i) << std::endl;
    }

    MyVector.Delete(2);
    std::cout << "Delete: " << std::endl;

    for (int i = 0; i < MyVector.GetSizeOf(); i++)
    {
        std::cout << MyVector.At(i) << std::endl;
    }

    MyVector.Remove(16);
    std::cout << "Remove 16: " << std::endl;

    for (int i = 0; i < MyVector.GetSizeOf(); i++)
    {
        std::cout << MyVector.At(i) << std::endl;
    }
    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;
    
    MyVector.Insert(1, 18);
    std::cout << "Insert 18 at 1: " << std::endl;
    for (int i = 0; i < MyVector.GetSizeOf(); i++)
    {
        std::cout << MyVector.At(i) << std::endl;
    }

    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;

    MyVector.Prepend(12);

    std::cout << "Insert 12 at 0: " << std::endl;
    for (int i = 0; i < MyVector.GetSizeOf(); i++)
    {
        std::cout << MyVector.At(i) << std::endl;
    }

    std::cout << MyVector.GetSizeOf() << std::endl;
    std::cout << MyVector.GetCapacity() << std::endl;

    return EXIT_SUCCESS;
}