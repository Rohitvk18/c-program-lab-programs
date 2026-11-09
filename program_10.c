Aim: To write, compile and execute a C program for the given problem.

Problem statement: (a) Determine whether a given integer is prime, and (b) display all prime numbers between two user-specified limits.

Source code: 

#include <stdio.h>

int isPrime(int n)
{
    int i;

    if (n < 2)
        return 0;

    for (i = 2; i <= n / i; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main()
{
    int number, lower, upper, i;

    printf("Enter an integer to test: ");
    scanf("%d", &number);

    if (isPrime(number))
        printf("%d is prime.\n", number);
    else
        printf("%d is not prime.\n", number);

    printf("\nEnter lower and upper limits: ");
    scanf("%d %d", &lower, &upper);

    if (lower > upper)
    {
        printf("Invalid range!\n");
        return 1;
    }

    printf("Prime numbers from %d to %d: ", lower, upper);

    for (i = lower; i <= upper; i++)
    {
        if (isPrime(i))
            printf("%d ", i);
    }

    printf("\n");

    return 0;
}


sample input/output:

Enter an integer to test: 7
7 is prime.

Enter lower and upper limits: 1 50

Prime numbers from 1 to 50: 2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 
