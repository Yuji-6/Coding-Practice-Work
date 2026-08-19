#include <stdio.h>
int main()
{
    int score = 0, attempt = 0, streak = 0, skip = 0;
    char result;
    printf("Quiz Game Score Calculator \n");
    printf("Enter your score result - \n C/c - CORRECT \n W/w - WRONG \n S/s - SKIPPED \n");
    for (int i = 1; i <= 10; i++)
    {
        printf("\nQuestion Number %d -    ", i);
        scanf(" %c", &result);
        printf("\n ----x----\n");
        if (result == 'c' || result == 'C')
        {
            ++score;
            ++score;
            ++score;
            ++score;

            ++streak;
            ++attempt;

            printf("Current Score - %d \t Current Streak - %d \t Attempted - %d \n", score, streak, attempt);
            printf(" ----X-----\n");
            if (streak == 5)
            {
                score += 5;
                printf("Congratulations !! Streak Bonus of 5 added!!! \n NEW SCORE - %d\n", score);
                streak = 0;
            }
        }
        else if (result == 'S' || result == 's')
        {
            ++attempt;
            ++skip;
            streak = 0;
            printf("Current Score - %d \t Current Streak - %d \t Attempted - %d\n", score, streak, attempt);
            printf(" ----X-----\n");
        }
        else if (result == 'W' || result == 'w')
        {
            --score;
            ++attempt;
            streak = 0;
            printf("Current Score - %d \t Current Streak - %d \t Attempted - %d\n", score, streak, attempt);
            printf(" ----X-----\n");
        }
        else
        {
            printf("INVALID INPUT !! PLEASE ENTER 'C' or 'W' or 'S'\n ");
            --i;
        }
    }

    printf(" \n-----------------------------------------------------\n");

    printf("QUIZ GAME RESULT :- \n");
    printf(" TOTAL SCORE - %d\n", score);
    printf(" TOTAL ATTEMPTED - %d\n", attempt);
    printf(" TOTAL SKIPPED - %d\n", skip);

    printf(" \n-----------------------------------------------------\n");

    return 0;
}