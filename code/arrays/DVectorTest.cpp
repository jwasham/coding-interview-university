#include "DVectorTest.h"
#include "DVector.h"
#include <cassert>
void DVectorTest::RunTests()
{
    void TestGetSizeOf();
    void TestGetCapacity();
    void TestIsEmpty();
    void TestAt();
    void Pop();
    void TestDelete();
    void TestFind();
    void TestRemove();
    void TestInsert();
    void TestPrepend();
}

void DVectorTest::TestGetSizeOf()
{
    DI::DVector TestVector(5);
    assert(TestVector.GetSizeOf() == 0);

    int64_t ItemsToAdd = 10;
    for (int64_t i = 0; i < ItemsToAdd; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.GetSizeOf() == ItemsToAdd);
}

void DVectorTest::TestGetCapacity()
{
    DI::DVector TestVector(5);
    assert(TestVector.GetCapacity() == 5);

    int64_t ItemsToAdd = 10;
    for (int64_t i = 0; i < ItemsToAdd; ++i)
    {
        TestVector.PushBack(i + 1);
    }

    assert(TestVector.GetCapacity() == (ItemsToAdd * 2));
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
    assert(TestVector.At(5));
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