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
        pf("Enter the element [%d]: ", i);
        scanf("%d", &array[i]);
    }

    pf("\n\n Array Output : ");
    for (int i = 0; i < size; i++)
    {
        if (array[i] < 0)
        {
            pf("%d", array[i]);
        }
    }

}