#include "./DList.h"
#include "DListTest.h"
#include <cassert>

void DListTest::RunTests()
{
    void TestSize();
    // void TestAt();
    // void DListTestTestPushFront();
    // void TestPopFront();
    // void TestPushBack();
    // void TestPopBack();
    // void TestFront();
    // void TestBack();
    // void TestInsert();
    // void TestErase();
    // void TestValueFromEnd();
    // void TestReverse();
    // void TestRemoveValue();    
}

void DListTest::TestGetSizeOf()
{
    DI::DList List = DI::DList();

    std::int16_t ItemsToAdd = 10;
    for (std::int16_t i = 0; i < ItemsToAdd; i++)
    {
        List.PushBack(10 + i);
    }
    
    assert(List.GetSizeOf() == ItemsToAdd);
}