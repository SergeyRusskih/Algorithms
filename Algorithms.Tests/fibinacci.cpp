#include "pch.h"
#include "..\Algorithms\fibonacci.h"

TEST(FibonacciLenearComplexityTest, Zero) {
    EXPECT_EQ(Fibonacci::run_linear(0), 0);
}

TEST(FibonacciLenearComplexityTest, One) {
    EXPECT_EQ(Fibonacci::run_linear(1), 1);
}

TEST(FibonacciLenearComplexityTest, Two) {
    EXPECT_EQ(Fibonacci::run_linear(2), 1);
}

TEST(FibonacciLenearComplexityTest, Nine) {
    EXPECT_EQ(Fibonacci::run_linear(9), 34);
}