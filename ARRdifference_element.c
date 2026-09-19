#include <stdio.h>
int main()
{
    int n = 0, largest = 0, smallest = 0;

    printf("Please enter number of elements\n");
    int input = scanf(" %d", &n);
    int arr[n];

    if (input == 0 || n < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Enter Element %d - ", i);
        scanf(" %d", &arr[i]);
    }

    largest = arr[1];
    smallest = arr[1];
    for (int i = 1; i <= n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
        else if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int difference = largest - smallest;
    printf("Largest element in the array is - \t%d\n", largest);
    printf("Smallest element in the array is - \t%d\n", smallest);
    printf("Difference between the largest and smallest elements of the array is - \t%d", difference);

    return 0;
}