#include <stdio.h>
#include "function.c"

void main()
{
    int size;

    printf("Enter number of elements : ");
    size = inputInt();

    int a[size];

    arrayInput(a, size);

    printf("\n\n");
    printf("Array element sum of %d\n\n", arrayElementsSum(a, size));

    int len = stringLen("Hello World");
    printf("String Length is %d", len);
}