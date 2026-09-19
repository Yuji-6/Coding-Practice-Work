#include <stdio.h>
int main()
{

    for (int r = 1; r <= 9; r++)
    {
        if (r <= 5)
        {
            for (int c = 5; c >= r; c--)
            {
                printf("* ");
            }
        }
        else
        {
            int r1 = r-4;
            for (int c1 = 1; c1 <= r1; c1++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }

    printf("\n");

    return 0;
}