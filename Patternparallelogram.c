#include <stdio.h>
int main() // use 1 outer loop
{
    int number;
    printf("Please enter of how many rows you want the Pyramid to be\n");
    int input = scanf(" %d", &number);
    if (input == 0 || number < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }
    printf("\n");
    for (int r = 1; r <= number; r++)
    {
        for (int s = 1; s <= number - r; s++)
        {
            printf(" ");
        }

        for (int c = 1; c <= number; c++)
        {
            printf("*");
        }
        printf("\n");
    }
    printf("\n");
    for (int r = 1; r <= number; r++)
    {
        for (int s = 1; s <= r - 1; s++)
        {
            printf(" ");
        }

        for (int c = 1; c <= number; c++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}