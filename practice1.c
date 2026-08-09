#include <stdio.h>
int main(){

    printf("Please enter a number \n");
    double a;
    scanf(" %lf", &a);

 printf("Please enter the symbol of the operation you want to perform with the given numbers \n");
    char c;
    scanf(" %c", &c);

    printf("Please enter another number\n");
    double b;
    scanf(" %lf", &b);
    
   
 if(c == '+'){
    double result1 = a + b;
    printf("Answer = %.2f \n", result1 );
         } else if(c == '-'){
            double result2 = a - b;
            printf("Answer = %.2f \n", result2);
         }else if (c == '*'){
           double result3 = a * b;
            printf("Answer = %.2f \n", result3);
         } else if (c == '/'){
            if(b == 0){
                printf("ERROR. INVALID OPERATION");
            } else if (b >= 0 ){
                double result4 = a / b;
                printf("Answer = %.2f \n", result4);
            } else if (b <= 0 ){
                double result5 = a / b; 
                printf("Answer = %.2f\n", result5);
            }
         }
    return 0;
}