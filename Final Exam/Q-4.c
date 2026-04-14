#include <stdio.h>
#define pf printf

int main()
{
    int n, i;

    pf("Enter the size of elements : ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        pf("Enter the element : ");
        scanf("%d", &arr[i]);
    }

    pf("\nelements square is :\n");
    for (i = 0; i < n; i++)
    {
        int value = *(ptr + i);
        int square = value * value;
        pf("Element %d squared: %d\n", i + 1, square);
    }

}
