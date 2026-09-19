#include <stdio.h>
int main()
{
    int number = 0, prime = 0;
    printf("Please enter the number to be checked \n");
    if (scanf(" %d", &number) == 0)
    {
        printf(" Please enter a valid input");
        return 0;
    }
    for (int i = 2; i <= number / 2; i++)
    {
        
    if (number % i == 0)
    {
        ++prime;
    }
    }
     if (prime == 0)
            {
                printf("\nPRIME NUMBER");
            }else{
                printf("\nNOT PRIME");
            }
            

    return 0;
}