#include <stdio.h>
#define pf printf

int main()
{
    int size;

    pf("Enter size of Array :");
    scanf("%d", &size);

    int array[size];
    int *ptr;

    ptr = array;

    pf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        pf("Enter array[%d] :", i);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < size; i++)
    {
        pf("%u => %d\n", ptr + i, *(ptr + i));
    }

    return 0;
}