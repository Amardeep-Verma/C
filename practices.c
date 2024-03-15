#include <stdio.h>

int main()
{
    int num, sum = 0;

    printf("Enter numbers from 1 to 5. Enter a negative number to stop.\n");

    while (1)
    {
        printf("Enter a number: ");
        scanf("%d", &num);

        if (num < 0)
        {
            break; // Exit the loop if a negative number is entered
        }

        if (num < 1 || num > 5)
        {
            printf("Please enter a number between 1 and 5.\n");
            continue; // Skip the rest of the loop and start from the beginning
        }

        sum += num;
    }

    printf("Sum of numbers from 1 to 5: %d\n", sum);

    return 0;
}
