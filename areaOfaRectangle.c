#include <stdio.h>
int main()
{

    double length, breadth, area;

    printf("Please enter the length(m) \n");
    scanf(" %lf", &length);

    printf("Please enter the breadth(m) \n");
    scanf(" %lf", &breadth);

    area = length * breadth;

    printf(" The area of the rectangle with \n %.1lf m Length \n %.1lf m Breadth is :- \n %.1lf m^2", length, breadth, area);

    return 0;
}