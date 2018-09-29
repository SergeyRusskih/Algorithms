#include <stdio.h>

int run(int start, int end);
int get_length(int i);

int main() 
{
    int i, j, result;
    while (scanf("%d %d", &i, &j) != EOF) {
        result = run(i, j);
        printf("%d %d %d\n", i, j, result);
    }

    return 0;
}

int run(int start, int end) {

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

int get_length(int i) {

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
