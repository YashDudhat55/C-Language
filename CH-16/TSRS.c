#include <stdio.h>
#define pf printf

int sub(int a, int b)
{
    return a - b;
}

int main()
{
    int a, b;

    pf("Enter a and b :");
    scanf("%d %d", &a, &b);

    int ans = sub(a, b);
    pf("Ans : %d", ans);

    return 0;
}