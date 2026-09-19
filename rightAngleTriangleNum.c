#include <stdio.h>
int main()
{
    int num;
    printf("Please enter the limit till which you want to print the pattern\n");
    int input = scanf(" %d",&num);
    if (input <= 0 || num < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }
    printf("\n");
    for (int r = 1; r <= num; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            printf("%d ",c);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}