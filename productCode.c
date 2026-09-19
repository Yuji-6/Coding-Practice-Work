#include<stdio.h>
int main(){// how to use bitwise AND??
int numOfCodes, code, temp1 = 0, temp2 = 0;
printf("Please enter the number of codes you want to sort\n");
scanf(" %d", &numOfCodes);
    for (int i = 1; i <= numOfCodes; i++)
    {
        printf("\nPRODUCT CODE - %d\n", i);
    scanf(" %d", &code);
    temp1 = code;
    temp2 = code;
    if(temp1 % 3 == 0 && temp1 % 5 == 0){
        printf("PRIME-BATCH\n");
    }else if (temp1 % 3 == 0)
    {
         printf("SPECIAL-BATCH\n");
    }else if (temp1 % 5 == 0)
    {
         printf("REGULAR-BATCH\n");
    }else{
        printf("MISC-BATCH\n");
    }
    }
    
    
    
    

    return 0;
}