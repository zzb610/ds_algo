#include "insertion_sort.h"

#include <algorithm>
#include <gtest/gtest.h>
#include <vector>

namespace ds_algo {

TEST(InSertionSortTest, FakeTest) {
  std::vector<int> data = {3, 5, 4, 5, 6, 4, 99, 12, 32, 1, 0, 9, 123, 2, 33};
  std::vector<int> ref_data(data);
  
  InsertionSort<std::vector<int>::iterator>(data.begin(), data.end());
  std::sort(ref_data.begin(), ref_data.end());

  EXPECT_EQ(data, ref_data);
 
}
} // namespace ds_algo

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}