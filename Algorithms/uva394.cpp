#include "stdafx.h"
#include "targetver.h"

// Runner.cpp : Defines the entry point for the console application.
//

#include <algorithm>
#include <cstdio>

#include <string>
#include <cstring>

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main()
{
    string line;
    ifstream myfile("input.txt");

    // read header
    getline(myfile, line);
    int r = line[0] - '0';
    int n = line[2] - '0';

    while (getline(myfile, line)) {
        istringstream stringStream(line);
        string word;

        // print the name
        stringStream >> word;
        cout << word;
        cout << '[';

        int result = 0;

        bool first = true;
        while (stringStream >> word) {
            if (first) {
                cout << word;
            }
            else {
                cout << ", " << word;
            }

            first = false;
        }

        cout << "] = " << result << endl;
    }

    myfile.close();

    return 0;
}