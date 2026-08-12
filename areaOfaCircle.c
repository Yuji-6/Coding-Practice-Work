#include <stdio.h>
#define pi 3.1415926
int main(){

double radius;
double area;
printf("Please enter the radius(in m) of the circle \n");
scanf(" %lf", &radius);

area = pi * radius;

printf(" %.3lf m^2", area);
return 0;
}