Aim: To write, compile and execute a C program for the given problem. 

Problem statement: Search for an element in an integer array using linear search. Display every position at which the element occurs and the total frequency.
Display “Element not found” when absent.

Source code: 

#include <stdio.h>
#define MAX 100

int main()
{
    int a[MAX], n, key, i, frequency = 0;

    printf("Enter number of elements (1-%d): ", MAX);
    scanf("%d", &n);

    if (n < 1 || n > MAX) {
        printf("Invalid array size.\n");
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            printf("Found at position %d (index %d).\n", i + 1, i);
            frequency++;
        }
    }

    if (frequency == 0)
        printf("Element not found.\n");
    else
        printf("Total frequency = %d\n", frequency);

    return 0;
}


sample input/output:

Enter number of elements (1-100): 5
Enter element 1: 17
Enter element 2: 18
Enter element 3: 25
Enter element 4: 12
Enter element 5: 54

Enter element to search: 18

Found at position 2 (index 1).

Total frequency = 1
