#include <stdio.h>
int main()
{
    int rows = 0, col = 0, add = 0;
    printf("Please enter the number of rows and columns.\nIt should be a square matrix\nROW = COLUMN\n");
    int s1 = scanf(" %d", &rows);
    int s2 = scanf(" %d", &col);
    if (s1 <= 0 || s2 <= 0)
    {
        printf("Please enter valid input!!");
        return 0;
    }
    if (rows != col )
    {
        printf("Please see that ROW = COLUMN such that it should be a SQUARE MATRIX.\nThank you.");
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
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < col; j++)
            {if (i == j)
            {
                add += arr[i][j];
            }
            
                
            }
             
        }
        printf("The sum of the diagonal elements is  - %d", add);

        return 0;
    
}