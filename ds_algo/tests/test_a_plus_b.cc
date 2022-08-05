#include "a_plus_b.h"

#include <gtest/gtest.h>
#include <vector>
#include <iostream>

namespace ds_algo {

TEST(APlusBTest, Test01) {

  int a = 1, b = 2;
  int sum = Add(a, b);
  EXPECT_EQ(sum, 3);
}

TEST(APlusBTest, Test02) {

  int a = 5, b = 29;
  int sum = Add(a, b);
  EXPECT_EQ(sum, 34);
}

TEST(APlusBTest, Test03) {

  int a = 3232, b = 21;
  int sum = Add(a, b);
  EXPECT_EQ(sum, 3253);
}

TEST(APlusBTest, Test04) {

  int a = 0, b = 3232;
  int sum = Add(a, b);
  EXPECT_EQ(sum, 3232);
}


TEST(APlusBTest, Test05) {

  int a = 6565, b = 0;
  int sum = Add(a, b);
  EXPECT_EQ(sum, 6565);
}

} // namespace ds_algo

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}