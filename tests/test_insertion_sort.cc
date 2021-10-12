#include <gtest/gtest.h>
#include "insertion_sort.h"

TEST(InSertionSortTest, FakeTest)
{
    EXPECT_EQ(ds_algo::insertion_sort(2, 3), 5);
}