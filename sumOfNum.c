#include <stdio.h>
int main(){

    int result=0, num = 0;
    printf("Please print till where you want sum \n");
    if (scanf(" %d", &num) == 0){
    printf(" Please enter a valid input \n");
        return 1;
    }

    for (int i = 1; i <= num; i++)
    {
        result += i;
       
    }
     printf(" The sum is %d", result);
    return 0;
}