#include <stdio.h>
int main()
{
    int limit = 0, x = 1, y = 0, add;
    printf("Please enter the limit till which you want to print the FIBONACCI SERIES");

    if (scanf(" %d", &limit) != 1 || limit < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }

    for (int i = 0; i < limit; i++)
    {
        printf("%d", y);
        add = y + x;
        y = x;
        x = add;
    }

    return 0;
}