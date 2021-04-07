#include "DVectorTest.h"
#include "DVector.h"
#include <cassert>
#include <iostream>

void DVectorTest::RunTests()
{
    TestGetSizeOf();
    TestGetCapacity();
    TestIsEmpty();
    TestAt();
    TestPop();
    TestDelete();
    TestFind();
    TestRemove();
    TestInsert();
    TestPrepend();
}

void DVectorTest::TestGetSizeOf()
{
    DI::DVector TestVector(5);
    assert(TestVector.GetSizeOf() == 0);
    std::int64_t ItemsToAdd = 10;
    for (std::int64_t i = 0; i < ItemsToAdd; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.GetSizeOf() == ItemsToAdd);
}

void DVectorTest::TestGetCapacity()
{
    DI::DVector TestVector(5);
    assert(TestVector.GetCapacity() == 5);
}

void DVectorTest::TestIsEmpty()
{
    DI::DVector TestVector(5);
    assert(TestVector.IsEmpty() == true);
}

void DVectorTest::TestAt()
{
    DI::DVector TestVector(5);
    
    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.At(3) == 4);
}

void DVectorTest::TestPop()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.Pop() == 5);
    assert(TestVector.GetSizeOf() == 4);
}

void DVectorTest::TestDelete()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.At(3) == 4);
    assert(TestVector.GetSizeOf() == 5);
    TestVector.Delete(3);
    assert(TestVector.GetSizeOf() == 4);
}

void DVectorTest::TestFind()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.Find(2) == 1);
    TestVector.PushBack(2); //add digit 2 to end
    assert(TestVector.Find(2) == 1); //still has to find first value
}

void DVectorTest::TestRemove()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    TestVector.PushBack(3);
    TestVector.PushBack(3);

    TestVector.Remove(3);
    assert(TestVector.Find(3) == -1);
}

void DVectorTest::TestInsert()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }
    
    assert(TestVector.At(3) == 4);
    TestVector.Insert(3, 10);
    assert(TestVector.At(3) == 10);
}

void DVectorTest::TestPrepend()
{
    DI::DVector TestVector(5);

    for (int64_t i = 0; i < 5; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.At(0) == 1);
    TestVector.Prepend(8);
    assert(TestVector.At(0) == 8);
}