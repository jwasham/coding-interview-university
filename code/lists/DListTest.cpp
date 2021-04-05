#include "DListTest.h"
#include "DList.cpp"
#include "DList.h"
#include <iostream>
#include <cassert>

void DListTest::RunTests()
{
    TestGetSizeOf();
    TestAt();
    TestPushFront();
    TestPopFront();
    // TestPushBack();
    // TestPopBack();
    // TestFront();
    // TestBack();
    // TestInsert();
    // TestErase();
    // TestValueFromEnd();
    // TestReverse();
    // TestRemoveValue();    
}

void DListTest::TestGetSizeOf()
{
    DI::DList<int> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    size_t Size = List.GetSizeOf();

    assert(Size == ItemsToAdd);
}

void DListTest::TestAt()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    std::cout << List.At(0);

    assert(List.At(0) == 10);
    assert(List.At(9) == 19);
    assert(List.At(4) == 4);
}

void DListTest::TestPushFront()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushFront(10 + i);
    }

    assert(List.At(0) == 19, );
    assert(List.At(9) == 10);
    assert(List.At(4) == 15);
}

void DListTest::TestPopFront()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }
    //Size before pop
    assert(List.GetSizeOf() == ItemsToAdd);

    auto PoppedVal = List.PopFront();
    std::cout << PoppedVal << List.GetSizeOf() << std::endl;
    assert(PoppedVal == 10);
    assert(List.GetSizeOf() == ItemsToAdd - 1);
}