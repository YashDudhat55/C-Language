#include <stdio.h>
#include <string.h>

main()
{
    char str[20];
    char str2[20];

    char cpy[20];

    printf("Enter any string 1 : ");
    gets(str);
    printf("Enter any string 2 : ");
    gets(str2);

    // strcat(str, str2);

    // printf("%s\n", str);

    strcpy(cpy, str);

    printf("Copy : %s\n", cpy);

    // puts("");
    // puts(str);

    // int len = strlen(str);
    // printf("String Length : %d\n", strlen(str));

    // strupr(str);

    // printf("UPPERCASf : %s\n", str);

    // strlwr(str);

    // printf("lowercase : %s\n", str);

    // strrev(str);

    // printf("Reverse : %s\n", str);

    int cmp = strcmp(str, str2);

    if (cmp == 0)
    {
        printf("Both string are same %d", cmp);
    }
    else
    {
        printf("Both string not are equale.... %d", cmp);
    }
}