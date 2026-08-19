#include <stdio.h>
void main()
{

    int n;

    printf("Please enter the number you want to verify \n");
    int count = scanf(" %d", &n);
   //printf( " %d \n", printf(" %d \n", scanf(" %d", &n)));
    int decider = n % 2; // % - modulus operator
    if (count == 0)
    { // why error?
        printf("Please enter a valid number");
    }
    else if (decider == 0)
    {
        printf("EVEN NUMBER");
    }
    else
    {
        printf("ODD NUMBER");
    }
    // return 0;
}