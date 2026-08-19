#include <stdio.h>
int main()
{

    int customer, age, day, ticketPrice = 0, basePrice = 200, totalPrice = 0;
    printf("WELCOME TO CINEMAX !!! \n \n");
    printf("Please enter the day you want to book the ticket for. \t [1-Monday, 2-Tuesday.....(1-7)] \n");
    scanf(" %d", &day);
    printf("Please enter the number of customers \n");
    scanf(" %d", &customer);

    if (7 <= day < 1)
    {
        printf("Please start the process again AND enter a VALID input !!");
        return 0; // why is the return 0; not working??
    }
    for (int i = 1; i <= customer; ++i)
    {
        printf("Please enter the age of Customer %d : ", i);
        scanf(" %d", &age);
        if (age < 0)
        {
            printf("Please start the process again AND enter a VALID age !!");
            return 0;
        }

        switch (day)
        {
        case 1:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice;
            }
            break;

        case 2:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice;
            }
            break;
        case 3:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice;
            }
            break;
        case 4:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice;
            }
            break;
        case 5:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice;
            }
            break;
        case 6:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice + 50;
            }
            break;
        case 7:
            if (age < 12 || age >= 60)
            {
                ticketPrice = basePrice * 0.5;
            }
            else
            {
                ticketPrice = basePrice + 50;
            }
            break;

        default:
            printf("Please enter a valid number");
            break;
        }
        totalPrice = totalPrice + ticketPrice;
    }
    printf(" \n The Total Payable Amount for %d people is $%d", customer, totalPrice);

    return 0;
}