#include <stdio.h>
int main()
{

    int n = 0, tempSum = 0, sum = 0;

    printf("Please enter number of elements\n");
    int input = scanf(" %d", &n);
    int arr[n];

    if (input == 0 || n < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }

    for (int i = 1; i <= n; i++) // ELEMENT ENTRY
    {
        printf("Enter Element %d - ", i);
        scanf(" %d", &arr[i]);
    }
    sum = arr[1] + arr[2];
    for (int i = 1; i <= n; i++) // CALCULATION
    {
        for (int j = i + 1; j <= n; j++)
        {
                tempSum = arr[i] + arr[j];
                if (tempSum > sum)
                {
                    sum = tempSum;
                }
            }
        }
    printf("LARGEST SUM - %d", sum);
    return 0;
}