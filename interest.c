#include <stdio.h>
int main()
{
    double p;
    double t;
    double r;

    printf("Please enter the Principle amount of the interest you want to calculate \n");
    scanf(" %lf", &p);

    printf("Please enter the Time after which your Principle will mature \n");
    scanf(" %lf", &t);

    printf("Please enter the Rate of the interest \n");
    scanf(" %lf", &r);

    double product = p * t * r;
    double simpleInterest = product / 100;
    double maturation = simpleInterest + p;
    printf(" Your interest on PRINCIPLE $%.2lf is $%.2lf \n", p, simpleInterest);
    printf(" Congratulations your principle matured!!!! You got $%.2lf", maturation);

    return 0;
}