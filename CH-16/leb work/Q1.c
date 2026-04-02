#include <stdio.h>
#define pf printf

void cube(int i);

int main()
{
    int i;

    pf("Enter the number : ");
    scanf("%d", &i);

    cube(i);

    return 0;
}

void cube(int i)
{
    int p = i * i * i;
    pf("Cube is: %d\n", p);
}