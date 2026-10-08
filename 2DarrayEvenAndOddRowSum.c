#include <stdio.h>
int main()
{
    int rows = 0, col = 0, rowSum = 0, sum = 0;
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
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < rows; i++)
    {
        rowSum = 0;
        for (int j = 0; j < col ; j++)
        {   
            
            rowSum += arr[i][j];
        }
            if (i % 2 == 0)
            {
                sum += rowSum;
            }
            else
            {
                sum -= rowSum;
            }
        
         printf("The sum of each row is as follows - %d \n", rowSum);
    }
    
    printf("The alternating sum and difference of the rows is - %d", sum);

    return 0;
}