#include <stdio.h>
#define pf printf

int main()
{
    int *ptr;
    int a[] = {5, 8, 3, 4, 7};

    ptr = &a[0];

    for (int i = 0; i < 5; i++)
    {
        pf("%u => %d\n", ptr + i, *(ptr + i));
    }

    return 0;
}