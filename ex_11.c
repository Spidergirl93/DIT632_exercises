//
// Created by marye on 2022-03-13.
//

/**
* Write a C program to input any number from user and check whether nth bit of the given number is set (1) or not (0).
 * Example Input
 * Input number: 12
 * Input nth bit number: 2
 * Output
 * 2 bit of 12 is set (1)
*/

#include <stdio.h>
#include <stdlib.h>

#define PROMPT_1 "Input number:\n"
#define PROMPT_2 "Input nth bit number:\n"
#define MAX_BIT 32


void dec_to_bin(int *pInt, char bin[32]);

char find_bit(int *bit_num, char bin[32]);

int main()
{
    int *input_num = malloc(sizeof (int));
    int *input_bit = malloc(sizeof(int));
    char input_bin[MAX_BIT] = {0};
    char the_bit = 0;

    printf(PROMPT_1);
    scanf("%d", input_num);

    printf(PROMPT_2);
    scanf("%d", input_bit);

    dec_to_bin(input_num, input_bin);

    the_bit = find_bit(input_bit, input_bin);

    printf("Bit number %d of %d is set (%c)", *input_bit, *input_num, the_bit);

    free(input_num);
    free(input_bit);
    return 0;

}

char find_bit(int *bit_num, char bin[32]) {
    char bit;
    bit = bin[*bit_num];
    return bit;
}

void dec_to_bin(int *pInt, char bin[32]) {
    int i = 0;
    int r;

    for(; i < 32; i++)
    {
        r = *pInt % 2;
        bin[i] = (r + '0');
        *pInt /= 2;
    }
}
