#include "DListTailTest.h"
#include "../src/DListTail.cpp"
#include "../src/DListTail.h"
#include <iostream>
#include <cassert>

void DListTailTest::RunTests()
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

void DListTailTest::TestGetSizeOf()
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

void DListTailTest::TestAt()
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

void DListTailTest::TestPushFront()
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

void DListTailTest::TestPopFront()
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

void DListTailTest::TestPushBack()
{
    DI::DList<std::int64_t> List {};

    size_t ItemsToAdd = 10;

    for (size_t i = 0; i < ItemsToAdd; ++i)
    {
        List.PushBack(10 + i);
    }

    assert(List.GetSizeOf() == ItemsToAdd);
}

void DListTailTest::TestPopBack()
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
    
    assert(PoppedVal == 19);
    assert(List.GetSizeOf() == (--ItemsToAdd));
}

void DListTailTest::TestFront()
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

void DListTailTest::TestBack()
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

void DListTailTest::TestInsert()
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

void DListTailTest::TestErase()
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

void DListTailTest::TestValueFromEnd()
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

void DListTailTest::TestReverse()
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

void DListTailTest::TestRemoveValue()
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