#include <stdio.h>
int main(){
    int number = 0;
    long long int factorial = 1;
    printf("Please enter the number of which you want to get the factorial. \n");
    if (scanf(" %d", &number) != 1)
    {
        printf("Please enter a valid input");
        return 0;
    }else if (number < 0)
    {
        printf("Please enter a positive number");
        return 0;
    }
    
    for (int i = number; i != 0; i--)
    {
        factorial *= i;
    }
    
    printf("\nFACTORIAL %d! is : %d", number, factorial);


    return 0;
}