#include <stdio.h>
int main(){
    int number;
    printf("Please enter a number \n");
    scanf(" %d", &number);
    number = number * number;

    printf(" The square of the value is - %d", number);
    return 0;
}