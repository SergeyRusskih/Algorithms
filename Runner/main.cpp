#include "stdafx.h"
#include "targetver.h"

// Runner.cpp : Defines the entry point for the console application.
//

#include <algorithm>
#include <cstdio>

#include <string>
#include <stack>

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

int main()
{
    int H, U, D, F;
    while (cin >> H >> U >> D >> F) {
        if (H == 0) return 0;

        int days = 0;
        double percent = (100 - F) / (double)100;
        double distance_climbed = 0;
        double height_a_climbing = 0;
        double height_a_sliding = 0;
        double initial_height = 0;

        while (height_a_climbing <= H && height_a_sliding >= 0) {
            
            days++;

            distance_climbed = distance_climbed == 0 
                ? U 
                : distance_climbed * percent;

            height_a_climbing = initial_height + distance_climbed;
            height_a_sliding = height_a_climbing - D;
            initial_height = height_a_sliding;
        }

        if (height_a_sliding > 0) {
            cout << "sucess on day " << days << endl;
        }
        else {
            cout << "failure on day " << days << endl;
        }
    }

    return 0;
}

// read line
//string text;
//while (getline(cin, text))

// read string by char
// c=getchar();

// read line 
// gets(string)

