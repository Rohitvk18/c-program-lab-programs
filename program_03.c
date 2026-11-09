#include <stdio.h>

void main()
{
    int marks[5], total = 0, i, failed = 0;
    float percentage;

    for (i = 0; i < 5; i++)
    {
        printf("Enter marks for subject %d (0-100): ", i + 1);
        scanf("%d", &marks[i]);

        if (marks[i] < 0 || marks[i] > 100)
        {
            printf("Invalid marks. Enter values from 0 to 100.\n");
            return 1;
        }

        total += marks[i];

        if (marks[i] < 35)
        {
            failed = 1;
        }
    }

    percentage = total / 5.0;

    printf("Total = %d / 500\n", total);
    printf("Percentage = %.2f%%\n", percentage);

    if (failed)
    {
        printf("Result: Fail\n");
    }
    else if (percentage >= 75)
    {
        printf("Result: Distinction\n");
    }
    else if (percentage >= 60)
    {
        printf("Result: First Class\n");
    }
    else if (percentage >= 50)
    {
        printf("Result: Second Class\n");
    }
    else
    {
        printf("Result: Pass Class\n");
    }

    getch();
}


sample input/output:

Enter marks for subject 1 (0-100): 80
Enter marks for subject 2 (0-100): 75
Enter marks for subject 3 (0-100): 85
Enter marks for subject 4 (0-100): 70
Enter marks for subject 5 (0-100): 90
Total = 400 / 500
Percentage = 80.00%
Result: Distinction
