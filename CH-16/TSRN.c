#include <stdio.h>
#define pf printf

void sum(int a, int b, int c);

void getChar(char ch)
{
    pf("My Character is %c\n", ch);
}

void getFloat(float PI)
{
    pf("PI : %.2f\n", PI);
}

void main()
{
    sum(45, 10, 30);

    int a, b, c;

    pf("Enter a, b and c : ");
    scanf("%d %d %d", &a, &b, &c);

    sum(a, b, c);

    getChar('3');
    getFloat(3.14);

    getChar('A');
}

void sum(int x, int y, int z)
{
    pf("%d + %d + %d = %d\n", x, y, z, (x + y + z));
}