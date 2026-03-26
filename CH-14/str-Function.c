#include <stdio.h>
#include <string.h>
#define pf printf

main()
{
    char str[20];
    char str2[20];

    char cpy[20];

    pf("Enter any string 1 : ");
    gets(str);
    pf("Enter any string 2 : ");
    gets(str2);

    // strcat(str, str2);

    // pf("%s\n", str);

    strcpy(cpy, str);

    pf("Copy : %s\n", cpy);

    // puts("");
    // puts(str);

    // int len = strlen(str);
    // pf("String Length : %d\n", strlen(str));

    // strupr(str);

    // pf("UPPERCASf : %s\n", str);

    // strlwr(str);

    // pf("lowercase : %s\n", str);

    // strrev(str);

    // pf("Reverse : %s\n", str);

    int cmp = strcmp(str, str2);

    if (cmp == 0)
    {
        pf("Both string are same %d", cmp);
    }
    else
    {
        pf("Both string not are equale.... %d", cmp);
    }
}