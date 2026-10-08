#include <stdio.h>
int main()
{
    int rows = 0, col = 0, add = 0;
    printf("Please enter the number of rows and columns.\n");
    int s1 = scanf(" %d", &rows);
    int s2 = scanf(" %d", &col);
    if (s1 <= 0 || s2 <= 0)
    {
        printf("Please enter valid input!!");
        return 0;
    }

    int arr[rows][col];
    printf("Enter the elements\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (scanf(" %d", &arr[i][j]) <= 0)
            {
                printf("Please enter a valid input");
                return 0;
            }
        }
    }
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == rows - 1 || j == 1 || j == col - 1)
            {
                add += arr[i][j];
            }
        }
    }
    printf("\n");
printf("The sum of the the boundary elements of the given 2D array is = %d", add);
    return 0;
}