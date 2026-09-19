#include<stdio.h>
int main(){
    int limit = 0, count3 = 0, count5 = 0;
    printf("Please enter till where you want to check the multiples\n");
   if((scanf(" %d", &limit)) == 0){
    printf("Please enter a valid input");
   }

   printf("MULTIPLES OF 3 -\n");
   for (int i = 1; i <= limit; i++)
   {
    if (i % 3 == 0)
    {
        printf("%d ", i);
        ++count3;
    }
   } 

    printf("\nMULTIPLES OF 5 -\n");
    for (int i = 1; i <= limit; i++)
   {
    if (i % 5 == 0)
    {
        printf("%d ", i);
        ++count5;
    }
   }
   
   printf("\nNumber of Multiples of 3 are :- %d\n", count3);
   printf("Number of Multiples of 5 are :- %d", count5);



    return 0;
}