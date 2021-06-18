#include "./tests/DListTest.h"
#include <iostream>

int main() 
{
    DListTest Tester;
    Tester.RunTests();
    std::cout << "SUCCESS" << std::endl;
    return EXIT_SUCCESS;
}