#include <stdio.h>
#define pf printf

void divisible(int i);

int main()
{
    int i;

    pf("Enter The Number : ");
    scanf("%d", &i);

    divisible(i);

    return 0;
}

void divisible(int i)
{
    if (i % 3 == 0 && i % 5 == 0)
    {
        pf("The number can be divisible by both 3 & 5.\n");
    }
    else
    {
        pf("The given number cannot be divisible by both 3 & 5.\n");
    }
}