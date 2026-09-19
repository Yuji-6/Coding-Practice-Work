#include <stdio.h>
int main()
{
    int digit = 0, number = 0, count = 0;
    printf("Please enter the number for DIGIT COUNT\n");
    if (scanf(" %d", &number) == 0)
    {
        printf("Please Enter Valid Input");
        return 0;
    }
    for (int i = number; i > 0; i = i / 10)
    {
        digit = i % 10;

        ++count;
    }
    printf(" Number of Digits = %d", count);

    return 0;
}