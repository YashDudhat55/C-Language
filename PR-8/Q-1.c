#include <stdio.h>
#define pf printf

int main()
{
    char input[100];
    char *p;
    int count = 0;

    pf("Enter any string : ");
    scanf("%[^\n]s", input);

    p = input;

    for (p = input; *p != '\0'; p++)
    {
        count++;
    }

    pf("\nTotal length : %d\n", count);

    return 0;
}