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
    for (int r = 1; r <= number; r++)
    {
        for (int s = 1; s <= r - 1; s++)
        {
            printf(" ");
        }
        for (int c = number; c >= r; c--)
        {
            printf("* ");
        }
        printf("\n");
    }
    for (int r1 = 2; r1 <= number; r1++)
    {
        for (int s1 = 1; s1 <= number - r1; s1++)
        {
            printf(" ");
        }
        for (int c1 = 1; c1 <= r1; c1++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}