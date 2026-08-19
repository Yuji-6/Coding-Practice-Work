#include <stdio.h>
int main() // the output calculation in all of the cases of if-esleif ladder is only being the first one
           // ie - only being multiplied by 5....no matter in which category of if-elseif the UNIT variable falls in....WHY???
{
    int unit, rental = 50, slab, totalBill = 0;
    float rebate;

    printf("Please enter the units of electricity you have used \n");
    scanf(" %d", &unit);
    if (0 < unit <= 100)
    {
        slab = 5 * unit;
    }
    else if (100 < unit <= 300)
    {
        slab = 7 * unit;
    }
    else if (300 < unit <= 500)
    {
        slab = 10 * unit;
    }
    else if (500 < unit)
    {
        slab = 13 * unit;
    }
    totalBill = slab + rental;
    if (totalBill <= 3000)
    {
        printf(" \n Your total bill amounts to - %d ", totalBill);
    }
    else if (totalBill > 3000)
    {
        rebate = (5 * totalBill) / 100;
        totalBill = totalBill - rebate;
        printf(" \n Base Price = %d \n Rebate = %f \n Rental - %d \n --------x---------- \n TOTAL BILL = %d ", slab, rebate, rental, totalBill);
    }
    /*
    Why is everything just getting multiplied by 5?
    in case of 700 also it is coming 5 * 700 = 3500 + 50 = 3550 and so on..........if-elseif ladder not working??? WHY?
    */
    return 0;
}