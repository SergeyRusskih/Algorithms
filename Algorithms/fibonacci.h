#pragma once
class Fibonacci
{
    Fibonacci();
    ~Fibonacci();

public:
    static int run_linear(int value);

private:
    static int run_linear_recursive(int prev, int current, int goal);
};

