#include <stdio.h>
int main()
{
    int n = 0, sum_even = 0, sum_odd = 0;
    printf("Please enter number of elements\n");
    int input = scanf(" %d", &n);
    if (input == 0 || n < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }

    int array[n];

    for (int i = 1; i <= n; i++)
    {
        printf("Element %d - \n", i);
        scanf(" %d", &array[i]);
    }

    for (int i = 1; i <= n; i++)
    {
        if (array[i] % 2 == 0)
        {
            sum_even += array[i];
        }
        else
        {
            sum_odd += array[i];
        }
    }
    printf("Sum of EVEN elements of array = %d\n", sum_even);
    printf("Sum of ODD elements of the array = %d", sum_odd);
    return 0;
}