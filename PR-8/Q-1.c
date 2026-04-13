#include <stdio.h>

int main()
{
    char input[100];
    char *p;
    int count = 0;

    printf("Enter any string : ");
    scanf("%[^\n]s", input);

    p = input;

    for (p = input; *p != '\0'; p++)
    {
        count++;
    }

    printf("\nTotal length : %d\n", count);

    return 0;
}