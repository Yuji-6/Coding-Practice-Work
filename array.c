#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of numbers you want to enter\n");
    scanf(" %d", &n);
    int array[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Number %d - ", i);
        scanf(" %d", &array[i]);
    }
printf("The array of numbers entered is - \n");
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}