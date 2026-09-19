#include <stdio.h>
int main()
{
    printf("\n");
    for (int r = 1; r <= 5; r++)
    {
        for (int s = 1; s < r; s++)
        {
            printf(" ");
        }

        for (int c = 5; c >= r; c--)
        {
            printf("*");
        }
        printf("\n");
    }
    for (int r2 = 2; r2 <= 5; r2++)
    {
        for (int s2 = 1; s2 <= 5 - r2; s2++)
        {
            printf(" ");
        }
        for (int c2 = 1; c2 <= r2; c2++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}