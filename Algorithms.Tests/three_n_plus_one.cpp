#include "pch.h"

TEST(ThreeNPlusOne, Set1) {
    EXPECT_EQ(Three_n_plus_one::run(1, 10), 20);
}

TEST(ThreeNPlusOne, Set2) {
    EXPECT_EQ(Three_n_plus_one::run(100, 200), 125);
}

TEST(ThreeNPlusOne, Set3) {
    EXPECT_EQ(Three_n_plus_one::run(201, 210), 89);
}

TEST(ThreeNPlusOne, Set4) {
    EXPECT_EQ(Three_n_plus_one::run(900, 1000), 174);
}