#include "hash_list.h"

#include <algorithm>
#include <gtest/gtest.h>
#include <vector>

namespace ds_algo {

TEST(HashListTest, Test01) {

  ds_algo::HashList<int, int> hash_list;

  hash_list.insert(1, 1);
  hash_list.insert(2, 2);
  EXPECT_EQ(hash_list[1], 1);
  hash_list.insert(3, 3);
  hash_list.pop_back();
  EXPECT_DEATH(hash_list[2], "");
  hash_list.insert(4, 4);
  hash_list.pop_back();
  EXPECT_DEATH(hash_list[1], "");

  EXPECT_EQ(hash_list[3], 3);
  EXPECT_EQ(hash_list[4], 4);
}
} // namespace ds_algo

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}