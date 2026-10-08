#include <stdio.h>
int main()
{
    int rows = 0, col = 0, upper = 0, lower = 0;
    printf("Please enter the number of rows and columns.\nIt should be a square matrix.\nROW = COLUMN\n");
    int s1 = scanf(" %d", &rows);
    int s2 = scanf(" %d", &col);
    if (s1 <= 0 || s2 <= 0)
    {
        printf("Please enter valid input!!");
        return 0;
    }
    if (rows != col)
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
        for (int j = 0; j < col; j++)
        {
            if (j >= i)
            {
                upper += arr[i][j];
            }
        }
        for (int k = 0; k < col; k++)
        {
            if (i > k)
            {
                lower += arr[i][k];
            }
        }
    }
printf("\n");
    printf("The sum of the upper triangle (INCLUDING DIAGONAL) is = %d\n", upper);
    printf("The sum of the lower triangle is = %d", lower);

    return 0;
}