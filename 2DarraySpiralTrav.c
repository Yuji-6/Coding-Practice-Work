#include <stdio.h>
int main()
{
    int rows = 0, col = 0;
    printf("Please enter the number of rows and columns.\n");
    int s1 = scanf(" %d", &rows);
    int s2 = scanf(" %d", &col);
    if (s1 <= 0 || s2 <= 0)
    {
        printf("Please enter valid input!!");
        return 0;
    }
 int top = 0, bottom = rows - 1, left = 0, right = col - 1;
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

    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right ; i++)
        {
            printf("%d",a[top][i]);
        }
        top++;
        for (int j = top; j <= bottom ; j++)
        {
            printf("%d "arr[i][right]);
        }
        right--;
        if (top <= bottom)
        {
            
        }
        
    }
    

return 0;
}