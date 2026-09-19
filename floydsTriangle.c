#include <stdio.h>
int main()
{
    int number;
    printf("Please enter of how many rows you want the Pyramid to be\n");
    int input = scanf(" %d", &number);
    if (input == 0 || number < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }

    int floyd = 1;

    for (int r = 1; r <= number; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf("%d ", floyd);
            floyd++;
        }
        printf("\n");
    }

    return 0;
}