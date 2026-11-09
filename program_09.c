Aim: To write, compile and execute a C program for the given problem. 

Problem statement: Determine whether a positive integer is an Armstrong number. Count the digits and raise each digit to that count before summation.

Source code:
#include <stdio.h>

long long integerPower(int base, int exponent)
{
    long long result = 1;
    int i;

    for (i = 0; i < exponent; i++)
        result *= base;

    return result;
}

int main(void)
{
    long long n, temp, sum = 0;
    int digits = 0, digit;

    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    temp = n;

    while (temp > 0)
    {
        digits++;
        temp /= 10;
    }

    temp = n;

    while (temp > 0)
    {
        digit = (int)(temp % 10);
        sum += integerPower(digit, digits);
        temp /= 10;
    }

    if (sum == n)
        printf("%lld is an Armstrong number.\n", n);
    else
        printf("%lld is not an Armstrong number.\n", n);

    getch();    
    return 0;
}


sample input/output:
Enter a positive integer: 1702
1702 is not an Armstrong number.




