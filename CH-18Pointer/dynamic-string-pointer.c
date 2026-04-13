#include <stdio.h>

int main()
{
    int size;

    printf("Enter size of Array :");
    scanf("%d", &size);

    int array[size];
    int *ptr;

    ptr = array;

    printf("\n\nArray Input\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("Enter array[%d] :", i);
        scanf("%d", ptr + i);
    }

    for (int i = 0; i < size; i++)
    {
        printf("%u => %d\n", ptr + i, *(ptr + i));
    }

    return 0;
}