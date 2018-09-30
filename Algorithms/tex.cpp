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
