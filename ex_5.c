//
// Created by marye on 2022-03-12.
//

/**
 * Write a program that, given a date, three ints (for example, 11 27 1997), will print the number of that day within
its year: i.e. Jan 1st is always 1, Dec 31st is either 365 or 366.
The months of the year have lengths according to the following rules:
• The odd months up to and including month 7 have 31 days.
• The even months from 8 upwards, have 31 days.
• Month 2 has 28 days except in a leap year when it has 29 days.
• The rest of the months have 30 days.
 */

#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
    int *day_num = malloc(sizeof (int));
    int *month_num = malloc(sizeof (int));
    int *year_num = malloc(sizeof (int));

    int result = 0;


    *day_num = atoi(argv[1]);
    *month_num = atoi(argv[2]);
    *year_num = atoi(argv[3]);

    int months[12] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int num_of_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};


    for(int i = 0; i < (sizeof (months) / sizeof (int)); i++)
    {
        if (*month_num == months[i])
        {
            for (int j = 0; j < i ; j++)
            {
                result = result + num_of_days[j];
            }
            result = result + *day_num;
            if ((*year_num % 4) == 0)
            {
                result++;
            }
            printf("number of the day in this year: %d", result);
            free(day_num);
            free(month_num);
            free(year_num);
            return 0;
        }
    }

    return 1;
}