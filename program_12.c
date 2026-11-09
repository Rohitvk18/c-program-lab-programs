Aim: To write, compile and execute a C program for the given problem.  

Problem statement: Print a right-angled number pattern. For n = 5, the rows shall be:  
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Source code:  

#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Number of rows must be positive.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        printf("\n");
    }

    return 0;
}


sample input/output:

Enter number of rows: 5
1 
1 2 
1 2 3 
1 2 3 4 
1 2 3 4 5 
