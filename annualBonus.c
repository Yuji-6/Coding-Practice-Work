#include <stdio.h>
int main(){
    int salary, rating, experience, newSalary = 0;
    float bonus = 0, baseBonus = 0, loyaltyBonus = 0;
    printf(" Please enter your current salary\n");
    printf("$");
   if((scanf(" %d", &salary)) == 0){
    printf("ERROR !!! Please Enter a valid input\n");
    return 0;
   }
    printf("Enter RATING - \n");
    scanf(" %d", &rating);
    printf("Enter the number of years you have been in the company - \n");
    if ((scanf(" %d", &experience) == 0)){
        printf("ERROR !!! Please Enter a valid input\n");
    }

    switch (rating)
    {
    case 1:
       printf("Bonus Aquired = $0\nYour salary remains = $%d\n", salary);
        break;
    case 2:
        baseBonus = (5*salary) / 100;
        bonus = baseBonus;
        newSalary = salary + bonus;
        printf("Base Bonus - $%.2f\tLoyalty Bonus = 0\tTotal Bonus = $%.2f\n",baseBonus, bonus);
        printf("Your new salary = $%d\n", newSalary);
        break;
    case 3:
    baseBonus = (10*salary)/100;
    bonus = baseBonus;
    newSalary = salary + bonus;
    printf("Base Bonus - $%.2f\tLoyalty Bonus = 0\tTotal Bonus = $%.2f",baseBonus, bonus);
    printf("\nYour new salary = $%d", newSalary);
    break;
    case 4:
    baseBonus = (15*salary)/100;
    if (experience >= 5)
    {
       loyaltyBonus += 5000;
    }
    bonus = baseBonus + loyaltyBonus;
    newSalary = salary + bonus;
      printf("Base Bonus - $%.2f\tLoyalty Bonus = $%.2f\tTotal Bonus = $%.2f", baseBonus, loyaltyBonus, bonus);
       printf("\nYour new salary = $%d", newSalary);
      break;
    case 5:
     baseBonus = (20*salary)/100;
    if (experience >= 5)
    {
       loyaltyBonus += 5000;
    }
    bonus = baseBonus + loyaltyBonus;
    newSalary = salary + bonus;
      printf("Base Bonus - $%.2f\tLoyalty Bonus = $%.2f\tTotal Bonus = $%.2f",baseBonus,loyaltyBonus, bonus);
       printf("\nYour new salary = $%d", newSalary);
      break;
    default: printf("\nPlease enter a valid input");
        break;
    }
    return 0;
}