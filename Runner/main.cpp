#include "stdafx.h"
#include "targetver.h"

// Runner.cpp : Defines the entry point for the console application.
//

#include <string>
#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;


int main()
{
    bool first = true;

    char text[1024];

    while (fgets(text, 1024, stdin)) {
        int len = strlen(text);

        for (int i = 0; i < len; i++) {
            if (text[i] == '"') {
                if (first) {
                    printf("``");
                }
                else {
                    printf("''");
                }

                first = !first;
            }
            else {
                printf("%c", text[i]);
            }
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

