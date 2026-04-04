#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mul(int a, int b)
{
    return a * b;
}

float divi(int a, int b)
{
    return (float)a / b;
}

int mod(int a, int b)
{
    return a % b;
}

int main()
{
    int choice, num1, num2;

    while (1)
    {
        printf("\n--- Calculator ---\n");
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for Exit\n");

        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        if (choice == 0)
        {
            printf("Exit code executed.\n");
            break;
        }

        printf("\nEnter the first number : ");
        scanf("%d", &num1);
        printf("\nEnter the second number : ");
        scanf("%d", &num2);

        switch (choice)
        {
        case 1:
            printf("Addition of %d and %d = %d\n", num1, num2, add(num1, num2));
            break;

        case 2:
            printf("Subtraction of %d and %d = %d\n", num1, num2, sub(num1, num2));
            break;

        case 3:
            printf("Multiplication of %d and %d = %d\n", num1, num2, mul(num1, num2));
            break;

        case 4:
            if (num2 != 0)
                printf("Division of %d and %d = %.2f\n", num1, num2, divi(num1, num2));
            else
                printf("Invalid operation! Division by zero.\n");
            break;

        case 5:
            if (num2 != 0)
                printf("Modulus of %d and %d = %d\n", num1, num2, mod(num1, num2));
            else
                printf("Invalid operation! Modulus by zero.\n");
            break;

        default:
            printf("Invalid choice!\n");
        }
    }

    return 0;
}