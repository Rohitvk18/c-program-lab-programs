Aim: To write, compile and execute a C program for the given problem.

Problem statement: Calculate the factorial of a non-negative integer and generate the Fibonacci series for a specified number of terms.

Source code: 

#include <stdio.h>

void main()
{
    int n, terms, i;

    unsigned long long factorial = 1;
    unsigned long long first = 0, second = 1, next;

    // Factorial calculation
    printf("Enter a non-negative integer for factorial (0 to 20): ");
    scanf("%d", &n);

    if (n < 0 || n > 20)
    {
        printf("Enter a value from 0 to 20.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        factorial *= i;
    }

    printf("%d! = %llu\n", n, factorial);

    // Fibonacci series
    printf("\nEnter number of Fibonacci terms (0 to 93): ");
    scanf("%d", &terms);

    if (terms < 0 || terms > 93)
    {
        printf("Enter a value from 0 to 93.\n");
        return 1;
    }

    printf("Fibonacci series: ");

    for (i = 0; i < terms; i++)
    {
        printf("%llu ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}


sample input/output:

Enter a non-negative integer for factorial (0 to 20): 5
5! = 120

Enter number of Fibonacci terms (0 to 93): 10
Fibonacci series: 0 1 1 2 3 5 8 13 21 34 
