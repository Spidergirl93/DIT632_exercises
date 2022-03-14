//
// Created by marye on 2022-03-14.
//
/**
 * Write a C program to concatenate two strings in single string. You cannot use the built-in function here. You should
 * use dynamic memory allocation at the heap. Example Input
 * Input string1: I love
 * Input string2: DIT632
 * Output
 * Concatenated string: I love DIT632
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_INPUT 100

int main()
{
    setbuf(stdout, 0);
    char *first_input = calloc(MAX_INPUT, 1);;
    char *second_input = calloc(MAX_INPUT, 1);
    char *p;

    printf("Input string1: ");
    fgets(first_input, MAX_INPUT, stdin);

    printf("Input string2: ");
    fgets(second_input, MAX_INPUT, stdin);

    p = first_input;

    while(*first_input != '\n')
    {
        first_input++;
    }

    while(*second_input != '\n')
    {
        *first_input = *second_input;

        first_input++;
        second_input++;
    }

    first_input = p;

    printf("%s", first_input);

    *first_input = '\0';
    *second_input = '\0';
    *p = '\0';

    return 0;
}