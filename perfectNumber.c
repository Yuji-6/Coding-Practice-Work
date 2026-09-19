#include<stdio.h>
int main(){
    int number, factor = 0;
    printf("Please enter the number which you want to check\n");
    int s1 = scanf(" %d", &number);
    if (s1 != 1 || s1 < 0)
    {
        printf("Please enter a valid input");
        return 0;
    }
    
    for (int i = 1; i <= number/2; i++)
    {
        if (number % i == 0)
        {
            factor += i; 
        }
        
    }
    
    if (factor == number)
    {
        printf("THE NUMBER ENTERED IS A PERFECT NUMBER !!");
    }else{
        printf("The number is not a PERFECT NUMBER");
    }
    

    return 0;
}