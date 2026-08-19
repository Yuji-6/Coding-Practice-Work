#include <stdio.h>
int main()
{
    int withdraw, note2000, note500, note200, note100, temp;
    float balance, value;
    printf("Please enter the Balance you have in your account - \n");
    scanf(" %f", &balance);
    printf("Please enter the amount of money you want to withdraw from your account \n");
    printf("Please make sure the amount entered is in multiples of 100. \n Thank you. \n Please proceed. \n");
    scanf(" %d", &withdraw);
    value = balance - withdraw;
    if (withdraw % 100 != 0)
    { // edge case 1
        printf("ERROR !! PLEASE ENTER THE WITHDRAWAL AMOUNT IN MULTIPLES OF 100");
    }
    else if (withdraw > 50000)
    { // edge case 2
        printf("ERROR !! CANNOT WITHDRAW MORE THAN $50000 IN A SINGLE GO");
    }
    else if (value < 500)
    { // edge case 3
        printf("ERROR !! MORE THAN $500 SHOULD REMAIN IN YOUR ACCOUNT AFTER WITHDRAWAL OF MONEY");
    }
    else
    { // starting logical part
        temp = withdraw;

        note2000 = temp / 2000;
        temp %= 2000;

        note500 = temp / 500;
        temp %= 500;

        note200 = temp / 200;
        temp %= 200;

        note100 = temp / 100;
        temp %= 100;

        printf("\n \a YOUR WITHDRAWAL - \n  %d X 2000 \n %d X 500 \n %d X 200 \n %d X 100", note2000, note500, note200, note100);

        printf("\n REMAINING BALANCE - $%.2f ", value);
        printf("\n -------------X---------------");
        printf("\n THANK YOU");
    }
    

    return 0;
}