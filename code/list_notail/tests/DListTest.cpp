#include "DListTest.h"
#include "../src/DList.cpp"
#include "../src/DList.h"
#include <iostream>
#include <cassert>

void DListTest::RunTests()
{
    TestGetSizeOf();
    TestAt();
    TestPushFront();
    TestPopFront();
    TestPushBack();
    TestPopBack();
    TestFront();
    TestBack();
    TestInsert();
    TestErase();
    TestValueFromEnd();
    TestReverse();
    TestRemoveValue();    
}

void DListTest::TestGetSizeOf()
{
    DI::DList<int> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    size_t size_ = List.GetSizeOf();

    assert(size_ == ItemsToAdd);
}

void DListTest::TestAt()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; i++)
    {
        List.PushBack(10 + i);
    }

    assert(List.At(0) == 10);
    assert(List.At(9) == 19);
    assert(List.At(4) == 14);
}

void DListTest::TestPushFront()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;
    
    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushFront(10 + i);
    }

    assert(List.At(0) == 19);
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
    //size_ before pop
    assert(List.GetSizeOf() == ItemsToAdd);

    auto PoppedVal = List.PopFront();
    // std::cout << PoppedVal << List.GetSizeOf() << std::endl;
    assert(PoppedVal == 10);
    assert(List.GetSizeOf() == (--ItemsToAdd));
}

void DListTest::TestPushBack()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);
}

void DListTest::TestPopBack()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }
    //size_ before pop
    assert(List.GetSizeOf() == ItemsToAdd);

    auto PoppedVal = List.PopBack();
    // std::cout << PoppedVal << List.GetSizeOf() << std::endl;
    assert(PoppedVal == 19);
    assert(List.GetSizeOf() == (--ItemsToAdd));
}

void DListTest::TestFront()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);
    assert(List.Front() == 10);
}

void DListTest::TestBack()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);
    assert(List.Back() == 19);
}

void DListTest::TestInsert()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);

    size_t Index = 5; std::int64_t Value = 25;
    List.Insert(Index, Value);

    assert(List.At(5) == 25);
    assert(List.GetSizeOf() == ItemsToAdd + 1);
}

void DListTest::TestErase()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);

    size_t Index = 5;
    List.Erase(Index);
    assert(List.At(5) == 16);
    assert(List.GetSizeOf() == ItemsToAdd - 1);
}

void DListTest::TestValueFromEnd()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }
    size_t N = 3;

    assert(List.ValueNFromEnd(N) == 17);
}

void DListTest::TestReverse()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 5;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    List.Reverse();

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        assert(List.At(i) == (14 - i));
    }
}

void DListTest::TestRemoveValue()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 5;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    List.PushBack(12);

    List.RemoveValue(12);

    assert(List.At(2) == 13);
    assert(List.At(4) == 12);
}