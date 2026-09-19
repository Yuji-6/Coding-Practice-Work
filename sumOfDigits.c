#include <stdio.h>
int main(){
    int digit = 0, number = 0, sum = 0;
    printf("Please enter the number of whose digits you want to sum up\n");
    if (scanf(" %d",&number) != 1)
    {
        printf("Please enter a valid input");
        return 0;
    }
    
    for (int i = number; i != 0; i = i/10)
    {
        digit = number % 10;
        number /= 10;
        sum += digit;
    }

    printf("The sum of digits of the number = %d",sum);
    

    return 0 ;
}