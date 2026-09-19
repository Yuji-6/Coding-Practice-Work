#include <stdio.h>
int main()
{
    int count;
    printf("ENTER THE COUNTDOWN START\n");
    int s1 = scanf(" %d", &count);
    if (s1 != 1 || s1 < 0)
    {
        printf("Please enter a valid input");
    }
    int i = count;
    while (i >= 0)
    {
        i--;
        if (i == 0)
        {
            printf("LIFTOFFFFFFFFFFF!!!!!!!!!!!!!!!");
            return 0;
        }
        else
        {
            printf("%d\n", i);
        }
    }

    return 0;
}