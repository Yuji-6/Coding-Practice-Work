#include <stdio.h>
int main()
{
    float numbers, a, b = 0;
    float average;
    printf("How many numbers do you want to average? \n");
    scanf(" %f", &numbers);

    for (int i = 1; i <= numbers; ++i)
    {
        printf("Enter number %f - ", i);
        scanf(" %f", &a);
        b = b + a;
    }
    average = b / numbers;
    printf(" %f \n", b);
    printf(" %.2f", average);

    return 0;
}