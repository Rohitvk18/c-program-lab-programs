#include <stdio.h>

void main()
{
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Sum = %d\n", a + b);
    printf("Difference = %d\n", a - b);
    printf("Product = %d\n", a * b);

    if (b != 0)
    {
        printf("Quotient = %d\n", a / b);
        printf("Remainder = %d\n", a % b);
    }
    else
    {
        printf("Division and remainder are not possible when the second integer is zero.\n");
    }

    getch();
}

sample input/output:
enter two integers:20,5
    sum:25
    difference:15
    product:100
    quotient:4
    remainder:0
