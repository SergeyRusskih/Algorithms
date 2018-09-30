#include "stdafx.h"
#include "targetver.h"

//
#include <stdio.h>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string result;
    while (scanf_s("%d", &result) != EOF) {
        printf("%d\n", result);
    }

    return 0;
}