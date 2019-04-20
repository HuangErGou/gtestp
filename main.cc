#include <gtest/gtest.h>
#include <boost/format.hpp>

#include <iostream>

extern int GreatestCommonDivisor(int a, int b);
extern int Add(int a, int b);

int main(int argc, char* argv[]) {
 testing::InitGoogleTest(&argc, argv);
 return RUN_ALL_TESTS();
}

int GreatestCommonDivisor(int a, int b) {
  if (0 == a || 0 == b) {
    return 0;
  }
  int c = a % b;
  if (c == 0) return b;
  return GreatestCommonDivisor(b, c);
}

int Add(int a, int b) {
    return a + b;
}