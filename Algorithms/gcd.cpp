#include "stdafx.h"
#include "gcd.h"


Gcd::Gcd()
{
}


Gcd::~Gcd()
{
}

// Euclid's algorithm
int Gcd::run(int x, int y)
{
    if (y == 0)
        return x;

    return run(y, x % y);
}
