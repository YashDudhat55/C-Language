#include <stdio.h>
#define pf printf

int main()
{
    char str[100];
    int i = 0, len = 0;
    int Palindrome = 1;

    pf("Enter any string: ");
    scanf("%s", str);

    while (str[len] != '\0')
    {
        len++;
    }

    for (i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - i - 1])
        {
            Palindrome = 0;
            break;
        }
    }

    if (Palindrome)
        pf("Palindrome.\n");
    else
        pf("Not Palindrome.\n");

    return 0;
}