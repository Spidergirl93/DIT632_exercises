//
// Created by marye on 2022-03-14.
//

/**
 * Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer, calculate
 * percentage and grade according to given conditions:
 * If percentage >= 90% : Grade A
 * If percentage >= 80% : Grade B
 * If percentage >= 70% : Grade C
 * If percentage >= 60% : Grade D
 * If percentage >= 40% : Grade E
 * If percentage < 40% : Grade F
 * Example Input
 * Input marks of five subjects: 95 95 97 98 90
 * Output
 * Percentage = 95.00 Grade A
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NUM_OF_COURSES 5

float calc_percentage(int array[5]);

int main()
{
    setbuf(stdout, 0);
    int grades[NUM_OF_COURSES] = {0};
    const char *prompt_sub[NUM_OF_COURSES];
    float average_percentage;

    prompt_sub[0] = "Physic grade";
    prompt_sub[1] = "Chemistry grade";
    prompt_sub[2] = "Biology grade";
    prompt_sub[3] = "Mathematics grade";
    prompt_sub[4] = "Computer grade";

    for(int i = 0; i < NUM_OF_COURSES; i++)
    {
        printf("Please insert %s:", prompt_sub[i]);
        scanf("%d", &grades[i]);
    }

    average_percentage = calc_percentage(grades);

    printf("Average percentage is: %f   Grade: ", average_percentage*100);

    if(average_percentage >= 0.90)
    {
        printf("A");
    } else if(average_percentage < 0.90 && average_percentage >= 0.80)
    {
        printf("B");
    } else if(average_percentage < 0.80 && average_percentage >= 0.70)
    {
        printf("C");
    }
    else if(average_percentage < 0.70 && average_percentage >= 0.60)
    {
        printf("D");
    } else if(average_percentage < 0.60 && average_percentage >= 0.40)
    {
        printf("E");
    } else if(average_percentage < 0.40)
    {
        printf("F");
    }

    return 0;
}

float calc_percentage(int array[5]) {
    float *result = malloc(sizeof (float));
    *result = 0.0;
    int i = 0;

    for(; i < NUM_OF_COURSES; i++)
    {
        *result = *result + ((float)(array[i]) / 100.0) ;
    }
     *result = *result / ((float) NUM_OF_COURSES);

    return *result;
}
