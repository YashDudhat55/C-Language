#include <stdio.h>
#define pf printf

int main()
{
    int array[5] = {5, 8, 4, 1, 9};
    int *ptr[5];

    for (int i = 0; i < 5; i++)
    {
        ptr[i] = &array[i];
    }

    for (int i = 0; i < 5; i++)
    {
        pf("%u => %d\n", ptr[i], *ptr[i]);
    }

    return 0;
}