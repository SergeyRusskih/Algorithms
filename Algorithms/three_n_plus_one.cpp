#include "stdafx.h"
#include "three_n_plus_one.h"

int Three_n_plus_one::run(int start, int end) {

    if (start > end) {
        start += end;
        end = start - end;
        start = start - end;
    }

    int max = 0;
    for (int i = start; i <= end; i++) {
        int length = get_length(i);
        if (length > max)
            max = length;
    }

    return max;
}

int Three_n_plus_one::get_length(int i) {

    int count = 1;
    while (i > 1) {
        if (i % 2 == 0) {
            i /= 2;
        }
        else {
            i = 3 * i + 1;
        }

        count++;
    }

    return count;
}
