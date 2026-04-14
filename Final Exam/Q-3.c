#include <stdio.h>
#define pf printf

int main()
{
    char str[100];
    int length = 0;
    char rev;

    pf("Enter a string : ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
    }

    for (int i = 0; i < length / 2; i++)
    {
        rev = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = rev;
    }

    pf("Reversed string : %s\n", str);

}