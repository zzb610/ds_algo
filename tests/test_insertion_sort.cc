#include <gtest/gtest.h>
#include <vector>
#include <algorithm>
#include "insertion_sort.h"

TEST(InSertionSortTest, FakeTest)
{
    std::vector<int> data = {3, 5, 4, 5, 6, 4, 99, 12, 32, 1, 0, 9, 123, 2, 33};
    std::vector<int> ref_data(data);

    ds_algo::InsertionSort(data.begin(), data.end());
    std::sort(ref_data.begin(), ref_data.end());
    EXPECT_EQ(data, ref_data);
}