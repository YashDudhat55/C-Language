#include <stdio.h>
#define pf printf

int sum()
{
    int a, b;

    pf("Enter a and b : ");
    scanf("%d %d", &a, &b);

    return a + b;
}

int inputInt()
{
    int n;

    scanf("%d", &n);

    return n;
}

int main()
{
    pf("Ans : %d", sum());

    int num;

    pf("\nEnter any Number :");
    num = inputInt();

    pf("\n\n");
    pf("Number : %d", num);

    return 0;
}