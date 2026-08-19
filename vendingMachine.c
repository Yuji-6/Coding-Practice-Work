#include <stdio.h>
int main()
{
    int token, amount, money = 0, temp = 0, tenR, fiveR, twoR, oneR;
    printf("\t\tWHICH ITEM WOULD YOU LIKE - \n");
    printf(" ---------------------------------------------------------------\n");
    printf("\t(1) - COFFEE : $15 \t (2) - TEA : $10 \n \t(3) - SANDWICH : $35 \t (4) - CHIPS : $20 \n \t(5) - WATER : $12 \n");
    if (scanf(" %d", &token) == 0)
    {
        printf("\n Please enter a valid input");
    }
    switch (token)
    {
    case 1:
        printf("\nPlease enter the amount - \n");
        printf("$");
        scanf(" %d", &amount);
        if (amount < 15)
        {
            printf("INSUFFICIENT AMOUNT ENTERED. PLEASE ENTER THE MINIMUM AMOUNT REQUIRED. THANK YOU");
            return 0;
        }
        else
        {
            money = amount - 15;
            temp = money;
            tenR = temp / 10;
            temp %= 10;

            fiveR = temp / 5;
            temp %= 5;

            twoR = temp / 2;
            temp %= 2;

            oneR = temp / 1;
            temp %= 1;
            printf("--------------------------------------------------------X---------------------------------------------------------\n");
            printf("\n\tTHANK YOU FOR YOUR PURCHASE. \n ITEM DISPENSED - COFFEE \n CHANGE RETURNED - $%d\n %d X $10 \t %d X $5 \n %d X $2 \t %d X $1 ",money, tenR, fiveR, twoR, oneR);
            printf("\n\n--------------------------------------------------------X---------------------------------------------------------");
        }

        break;
    case 2:
        printf("Please enter the amount - \n");
        printf("$");
        scanf(" %d", &amount);
        if (amount < 10)
        {
            printf("INSUFFICIENT AMOUNT ENTERED. PLEASE ENTER THE MINIMUM AMOUNT REQUIRED. THANK YOU");
            return 0;
        }
        else
        {
            money = amount - 10;
            temp = money;
            tenR = temp / 10;
            temp %= 10;

            fiveR = temp / 5;
            temp %= 5;

            twoR = temp / 2;
            temp %= 2;

            oneR = temp / 1;
            temp %= 1;
            printf("--------------------------------------------------------X---------------------------------------------------------\n");
            printf("\n\tTHANK YOU FOR YOUR PURCHASE. \n ITEM DISPENSED - TEA \n CHANGE RETURNED - $%d\n %d X $10 \t %d X $5 \n %d X $2 \t %d X $1 ",money, tenR, fiveR, twoR, oneR);
            printf("\n\n--------------------------------------------------------X---------------------------------------------------------");
        }
        break;
        case 3:
            printf("Please enter the amount - \n");
            printf("$");
            scanf(" %d", &amount);
            if (amount < 35)
            {
                printf("INSUFFICIENT AMOUNT ENTERED. PLEASE ENTER THE MINIMUM AMOUNT REQUIRED. THANK YOU");
                return 0;
            }
            else
            {
                money = amount - 35;
                temp = money;
                tenR = temp / 10;
                temp %= 10;

                fiveR = temp / 5;
                temp %= 5;

                twoR = temp / 2;
                temp %= 2;

                oneR = temp / 1;
                temp %= 1;
                printf("--------------------------------------------------------X---------------------------------------------------------\n");
                printf("\n\tTHANK YOU FOR YOUR PURCHASE. \n ITEM DISPENSED - SANDWICH \n CHANGE RETURNED - $%d\n %d X $10 \t %d X $5 \n %d X $2 \t %d X $1 ",money, tenR, fiveR, twoR, oneR);
                printf("\n\n--------------------------------------------------------X---------------------------------------------------------");
            }
            break;
            case 4:
                printf("Please enter the amount - \n");
                printf("$");
                scanf(" %d", &amount);
                if (amount < 20)
                {
                    printf("INSUFFICIENT AMOUNT ENTERED. PLEASE ENTER THE MINIMUM AMOUNT REQUIRED. THANK YOU");
                    return 0;
                }
                else
                {
                    money = amount - 20;
                    temp = money;
                    tenR = temp / 10;
                    temp %= 10;

                    fiveR = temp / 5;
                    temp %= 5;

                    twoR = temp / 2;
                    temp %= 2;

                    oneR = temp / 1;
                    temp %= 1;
                    printf("--------------------------------------------------------X---------------------------------------------------------\n");
                    printf("\n\tTHANK YOU FOR YOUR PURCHASE. \n ITEM DISPENSED - CHIPS \n CHANGE RETURNED - $%d\n %d X $10 \t %d X $5 \n %d X $2 \t %d X $1 ",money, tenR, fiveR, twoR, oneR);
                    printf("\n\n--------------------------------------------------------X---------------------------------------------------------");
                }
                break;
                case 5:
                    printf("Please enter the amount - \n");
                    printf("$");
                    scanf(" %d", &amount);
                    if (amount < 12)
                    {
                        printf("INSUFFICIENT AMOUNT ENTERED. PLEASE ENTER THE MINIMUM AMOUNT REQUIRED. THANK YOU");
                        return 0;
                    }
                    else
                    {
                        money = amount - 12;
                        temp = money;
                        tenR = temp / 10;
                        temp %= 10;

                        fiveR = temp / 5;
                        temp %= 5;

                        twoR = temp / 2;
                        temp %= 2;

                        oneR = temp / 1;
                        temp %= 1;
                        printf("--------------------------------------------------------X---------------------------------------------------------\n");
                        printf("\n\tTHANK YOU FOR YOUR PURCHASE. \n ITEM DISPENSED - WATER \n CHANGE RETURNED - $%d\n %d X $10 \t %d X $5 \n %d X $2 \t %d X $1 ",money, tenR, fiveR, twoR, oneR);
                        printf("\n\n--------------------------------------------------------X---------------------------------------------------------");
                        break;
                    default:
                        printf("PLEASE ENTER A VALID INPUT");
                        break;
                    }

                    return 0;
                }
            }
                