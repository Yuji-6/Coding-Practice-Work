#include <stdio.h>
#include<math.h>
int main(){
    int start,end;
    printf("Enter the limits of the range - \n");
    printf("START : \n");
    int s1 = scanf(" %d", &start);
    printf("END : \n");
    int s2 = scanf(" %d", &end);

    if (s1 <= 0 || s2 <= 0)
    {
        printf("Please enter valid input");
        return 0;
    }
    
    for (int i = start ; i <= end; i++)
    {
        int z;
        for ( z = 2; z * z <= i; z++)
        {
           if (i % z == 0)
           {
            break;
           }
           
        }
        if ((z * z) > i )
        {
            if(i != 0 && i != 1){
                printf("%d ",i);
            }
         
        }
        
    }
    
    return 0;
}