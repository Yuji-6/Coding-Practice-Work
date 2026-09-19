#include<stdio.h>
int main(){

    int n, num1, compare;
    printf("Please enter the number of numbers you want to input : ");
    int s1 = scanf(" %d", &n);

    printf("Please enter number 1 - ");
    int s2 = scanf(" %d", &num1);

    for (int i = 2; i <= n; i++)
    {
        printf("Please enter number %d - ", i);
        scanf(" %d", &compare);
if (compare < num1)
        {
           compare = num1; 
        }
       
    }

      printf("\nThe laregest number is - %d", compare);
        
    
    return 0;
}