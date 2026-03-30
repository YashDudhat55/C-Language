#include <stdio.h>
#include <string.h>
#define pf printf

int main()
{
    char str[100];
    int i, j;

    pf("Enter any string : ");
    scanf(" %[^\n]", str);

    if (str[0] >= 'A' && str[0] <= 'Z')
    {
        str[0] = str[0] + 32;
    }

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            for (j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j + 1];
            }

            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }

            i--;
        }
    }

    pf("CamelCase string : %s", str);
}