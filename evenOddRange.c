#include <stdio.h>
int main()
{
    int start = 0, end = 0;
    printf("Please enter the limits of the range\nSTART :");
    int s1 = scanf(" %d", &start);
    printf("END:");
    int s2 = scanf(" %d", &end);

    if (s1 != 1 || s2 != 1)
    {
        printf("Please enter a valid input");
        return 0;
    }

    int i = start;
    printf("EVEN RANGE - \n");
    while (i <= end)
    {
        if (i % 2 == 0)
        {
            printf("%d ", i);
        }
        i++;
    }


    int z = start;
    printf("\nODD RANGE\n");
    do
    {
        if (z % 2 != 0)
        {
            printf("%d ", z);
        }
        z++;
    } while (z <= end);
       

    return 0;
}