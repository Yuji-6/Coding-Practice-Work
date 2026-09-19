#include <stdio.h>
int main()
{
    int number = 0, present = 0, absent = 0;
    char attendance;

    printf("Please enter number of students\n");
    if ((scanf(" %d", &number)) != 1 || number < 1)
    {
        printf("Please enter valid input");
        return 0;
    }

    printf("Please enter the attendance as - \nPresent - P/p \nAbsent - A/a\n");

    for (int i = 1; i <= number; i++)
    {
        printf("Student %d - ", i);
    scanf(" %c", &attendance);       

        if (attendance == 'p' || attendance == 'P')
        {
            ++present;
        }
        else if (attendance == 'a' || attendance == 'A')
        {
            ++absent;
        }else{
            printf("Please enter valid input");
            return 0;
        }
    }
    printf("PRESENT - %d\n", present);
    printf("ABSENT - %d\n", absent);

    int percentage = (present * 100)/ number;
    printf("Attendance Percentage = %d ", percentage);

    return 0;
}