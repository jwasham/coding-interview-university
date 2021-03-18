#include "DListTest.h"
#include "DList.h"
#include <cassert>

void DListTest::RunTests()
{
    void TestGetSizeOf();
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
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }
    
    size_t Size = List.GetSizeOf();

    assert(Size == ItemsToAdd);
}