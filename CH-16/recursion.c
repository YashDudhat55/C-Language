#include <stdio.h>

void printLoop(int start, int end)
{
    if (start <= end) // 11 <= 10
    {
        printf("%d\t", start); // 1 2 3 ... 9 10

        start++; // 11

        printLoop(start, end); // 11 10
    }
}

void main()
{
    printLoop(10, 100);
}