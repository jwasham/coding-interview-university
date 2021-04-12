#include "./tests/DQueueListTest.h"
#include <iostream>

int main() 
{
    DQueueListTest Tester;
    Tester.RunTests();
    std::cout << "SUCCESS" << std::endl;
    return EXIT_SUCCESS;
}