#include <stdio.h>
int main(){
    int num = 0, limit = 0, result = 0;
    printf("Please enter the number of which you want the table of \n");
    if (scanf(" %d", &num) == 0)
    {
        printf("Please Enter Valid Input");
    }
    printf("Please enter till where you want the table \n");
    if (scanf(" %d", &limit) == 0)
    {
        printf("Please Enter Valid Input");
    }

    for (int i = 0; i <= limit; i++)
    {
        result = num * i;
        printf("%d X %d = %d \n", num, i, result);
    }
    
    

    return 0;
}