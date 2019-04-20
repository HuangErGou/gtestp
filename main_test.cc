#include <gtest/gtest.h>

extern int GreatestCommonDivisor(int a, int b);
extern int Add(int a, int b);

TEST(GreatestCommonDivisorTest, HandleNoneZeroInput) {
  EXPECT_EQ(2, GreatestCommonDivisor(4, 10));
  EXPECT_EQ(6, GreatestCommonDivisor(30, 18));
}

TEST(AddTest, CommonAddTest) {
  EXPECT_EQ(2, Add(1, 1));
  EXPECT_EQ(3, Add(1, 2));
  EXPECT_EQ(1, Add(0, 1));
}

TEST(AddTest, NegativeAddTest) {
  EXPECT_EQ(-2, Add(-1, -1));
  EXPECT_EQ(-3, Add(-1, -2));
  EXPECT_EQ(-1, Add(0, -1));
}