#include <stdio.h>
int main()
{
    int number = 0;
    printf("Please enter the number of elements you want to enter\n");
    int s1 = scanf(" %d", &number);
    if (s1 != 1 || s1 < 0)
    {
        printf("Invalid Input !!");
        return 0;
    }
    if (number == 0 || number < 0)
    {
        printf("Invalid Input !!");
        return 0;
    }
    
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        printf("Element %d - ",i);
        scanf(" %d", &arr[i]);
    }

    int target = 0;
    printf("Please enter the target element you want to search within the array\n");
     int s2 = scanf(" %d", &target);
    if (s2 != 1 || s2 < 0)
    {
        printf("Invalid Input !!");
        return 0;
    }
    for (int i = 0; i < number; i++)
    {
       // printf(" \n%d\n ", arr[i]);
        if (arr[i] == target)
        {
            printf("\nThe TARGET ELEMENT is found in the array at INDEX : %d", i);
            return 0;

        }
    }

    printf("The TARGET ELEMENT was not found within the provided array.\n");
    

    return 0;
}