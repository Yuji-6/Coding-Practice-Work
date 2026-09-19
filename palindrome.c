#include <stdio.h>
int main()
{
    int number, remainder, reverse = 0;
    printf("Please enter the number\n");
    int s1 = scanf(" %d", &number);
    if (s1 != 1 || s1 < 0)
    {
        printf("Invalid Input !!");
        return 0;
    }
    for (int i = number; i != 0; i = i / 10)
    {
        remainder = i % 10;
        reverse = (reverse * 10) + remainder;
    }

    if (number == reverse)
    {
        printf("\nITS A PALINDROMEEE!!!");
    }
    else
    {
        printf("ITS NOT A PALINDROMEEEE!!");
    }

    return 0;
}