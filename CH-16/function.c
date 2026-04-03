#include <stdio.h>

// TNRS
int inputInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

// TSRN
void arrayOutput(int a[], int size)
{
    printf("\n\nOutput of Array\n\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", a[i]);
    }
}

// TNRN
void arrayInput(int array[], int n)
{
    printf("\n\nInput of Array\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter a[%d] : ", i);
        array[i] = inputInt(); // Nested Function
    }

    arrayOutput(array, n); // Nested Function
}

// TSRS
int arrayElementsSum(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += a[i];

    return sum;
}

int stringLen(char str[])
{
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }

    return len;
}