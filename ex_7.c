//
// Created by marye on 2022-03-12.
//
/**
 * Write a program in C to add two numbers using pointers.
  Test Data :
  Input the first number : 5
  Input the second number : 6


  Expected Output :
  The sum of the entered numbers is : 11
 */

#include <stdio.h>
#include <stdlib.h>

#define PROMPT_1 "Please enter the first number:\n"
#define PROMPT_2 "Please enter the second number:\n"

int * sum_operator(int *num_1, int *num_2);

int main()
{
    int *first_num = malloc(sizeof (int));
    int *second_num = malloc(sizeof(int));

    int *sum;


    printf(PROMPT_1);
    scanf("%d", first_num);

    printf(PROMPT_2);
    scanf("%d", second_num);

    sum = sum_operator(first_num, second_num);

    printf("The summation of your numbers is:  %d", *sum);

    return 0;
}

int * sum_operator(int *num_1, int *num_2) {

    int *result = malloc(sizeof (int));

    *result = *num_1 + *num_2;

    return  result;
}
