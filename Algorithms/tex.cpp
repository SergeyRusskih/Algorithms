#include "stdafx.h"
#include "tex.h"

string Tex::run(string text) {

    bool first = true;
    for (int i = 0; i < text.length(); i++) {
        if (text[i] == '"') {
            if (first) {
                text.replace(i, 1, "``");
            }
            else {
                text.replace(i, 1, "''");
            }

            first = !first;
        }
    }

    return text;
}


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
