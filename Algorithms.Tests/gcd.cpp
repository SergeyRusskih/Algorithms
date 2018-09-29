#include "pch.h"
#include "..\Algorithms\gcd.h"

TEST(EuclidGcd, SimpleValues) {
    EXPECT_EQ(Gcd::run(15, 10), 5);
}
