#include <stdio.h>
int main()
{
    int rows = 0, col = 0, add = 0;
    printf("Please enter the number of rows and columns\n");
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
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            add += arr[i][j];
        }
        
    }
    
printf("The sum of all the elements of the array is - %d", add);

return 0;
}