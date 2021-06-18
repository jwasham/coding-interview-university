#include <cassert>
#include <iostream>
#include <gtest/gtest.h>
#include "d_vector.h"

namespace {
    class SizeAndCapacityTest: public ::testing::Test {};

    TEST_F(SizeAndCapacityTest, TestGetSizeEmpty) {
        DI::DVector test_vector(5);
        std::int64_t capacity = test_vector.GetCapacity();
        std::int64_t size = test_vector.GetSizeOf();

        EXPECT_EQ(capacity, 5);
        EXPECT_EQ(size, 0);
    }

    TEST_F(SizeAndCapacityTest, TestAutoResize) {
        DI::DVector TestVector(5);
        EXPECT_EQ(TestVector.GetSizeOf(), 0);
        std::int64_t items_to_add = 10;

        for (std::int64_t i = 0; i < items_to_add; ++i) {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.GetSizeOf(), items_to_add);
    }

    TEST_F(SizeAndCapacityTest, TestGetCapacity) {
        DI::DVector TestVector(5);
        EXPECT_EQ(TestVector.GetCapacity(), 5);
    }

    class IsEmptyTest: public ::testing::Test {};

    TEST_F(IsEmptyTest, TestIsEmpty) {
        DI::DVector TestVector(5);
        EXPECT_EQ(TestVector.IsEmpty(), true);        
    }

    class AtTest: public ::testing::Test {};

    TEST_F(AtTest, TestValueAt) {
        DI::DVector TestVector(5);
        
        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.At(3), 4);
    }

    class PopTest: public ::testing::Test {};

    TEST_F(PopTest, TestPop) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.Pop(), 5);
        EXPECT_EQ(TestVector.GetSizeOf(), 4);
    }

    class DeleteTest: public ::testing::Test {};

    TEST_F(DeleteTest, TestDelete) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.At(3), 4);
        EXPECT_EQ(TestVector.GetSizeOf(), 5);
        TestVector.Delete(3);
        EXPECT_EQ(TestVector.GetSizeOf(), 4);
    }

    class FindTest: public ::testing::Test {};

    TEST_F(FindTest, TestFind) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.Find(2), 1);
        TestVector.PushBack(2); //add digit 2 to end
        EXPECT_EQ(TestVector.Find(2), 1); //it still has to find first value
    }

    class RemoveTest: public ::testing::Test {};

    TEST_F(RemoveTest, TestRemove) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        TestVector.PushBack(3);
        TestVector.PushBack(3);

        TestVector.Remove(3);
        EXPECT_EQ(TestVector.Find(3), -1);
    }

    class InsertTest: public ::testing::Test {};

    TEST_F(InsertTest, TestInsert) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }
        
        EXPECT_EQ(TestVector.At(3), 4);
        TestVector.Insert(3, 10);
        EXPECT_EQ(TestVector.At(3), 10);
    }

   class PrependTest: public ::testing::Test {};

    TEST_F(PrependTest, TestPrepend) {
        DI::DVector TestVector(5);

        for (int64_t i = 0; i < 5; ++i)
        {
            TestVector.PushBack(i + 1);
        }

        EXPECT_EQ(TestVector.At(0), 1);
        TestVector.Prepend(8);
        EXPECT_EQ(TestVector.At(0), 8);
    }
    
}