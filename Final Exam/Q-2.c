#include <stdio.h>
#define pf printf

int main()
{

    int size;

    pf("Enter the size of the array: ");
    scanf("%d", &size);

    int array[size];

    pf("\n\n Array Input \n\n");
    for (int i = 0; i < size; i++)
    {
        pf("Enter the element : ");
        scanf("%d", &array[i]);
    }

    pf("\n\n Array Output \n\n");
    for (int i = 0; i < size; i++)
    {
        pf("%d\n\t", array[i]);
    }

    int max = array[0];
    for (int i = 1; i < size; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
    }
    pf("\n\n Maximum element in the array is: %d", max);
}