#include <stdio.h>
int main()
{

   printf("Please enter a number \n");
   double a;
   scanf(" %lf", &a);

   printf("Please enter the one the following operators : (+ , - , * , /) \n");
   char c;
   scanf(" %c", &c); // doubt - why does the compiler skip the scanf statement when i do not give any gap before the format specifier?

   printf("Please enter another number\n");
   double b;
   scanf(" %lf", &b);

double result;

   if (c == '+')
   {
       result = a + b;
      printf("Answer = %.2f \n", result);
   }
   else if (c == '-')
   {
       result = a - b;
      printf("Answer = %.2lf \n", result);
   }
   else if (c == '*')
   {
       result = a * b;
      printf("Answer = %.2lf \n", result);
   }
   else if (c == '/')
   {
      if (b == 0)
      {
         printf(" \a ERROR. INVALID OPERATION");
      }
      else if (b >= 0)
      {
          result = a / b;
         printf("Answer = %.2lf \n", result);
      }
      else if (b <= 0)
      {
          result = a / b;
         printf("Answer = %.2lf \n", result);
      }
   }
   return 0;
}