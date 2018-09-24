#include "stdafx.h"
#include "Fibonacci.h"

int Fibonacci::run_linear(int value) {
    switch (value)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        default:
            return run_linear_recursive(0, 1, --value);
    }
}

int Fibonacci::run_linear_recursive(int prev, int current, int goal) {
    if (goal == 0)
        return current;

    return run_linear_recursive(current, prev + current, --goal);
}
