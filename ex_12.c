//
// Created by marye on 2022-03-13.
//

/**
*Write a C program to input any number from user and toggle or invert or flip nth bit of the given number using bitwise
 * operator.
 * Example Input
 * Input number: 22
 * Input nth bit to toggle: 1
 * Output
 * After toggling nth bit: 20 (in decimal)
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PROMPT_1 "Input number:\n"
#define PROMPT_2 "Input nth bit to toggle:\n"
#define MAX_BIT 32


void dec_to_bin(int *num, char bin[32]);
void flip_bit(int *bit, char bin[32]);
int bin_to_dec(char bin[32]);

int main()
{
    int *input_num = malloc(sizeof (int));
    int *input_bit = malloc(sizeof (int));
    char bin[MAX_BIT];    //Type is char to get less memory
    int output;

    printf(PROMPT_1);
    scanf("%d", input_num);

    printf(PROMPT_2);
    scanf("%d", input_bit);

    dec_to_bin(input_num, bin);
    flip_bit(input_bit, bin);
    output = bin_to_dec(bin);


    printf("After toggling %dth bit: %d (in decimal)", *input_bit, output);

    free(input_num);
    free(input_bit);
    return 0;
}

int bin_to_dec(char bin[32])
{
    int result = 0;
    int i = 0;

    for(; i < 32; i++)
    {
        int j = bin[i] - '0';
        result = j * pow(2, i) + result;
    }
    return result;
}


void flip_bit(int *bit, char bin[32])
{
    if (bin[*bit] == '1')
    {
        bin[*bit] = '0';
    } else
    {
        bin[*bit] = '1';
    }
}

void dec_to_bin(int *num, char bin[32])
{
    int i = 0;
    int number = *num;

    for(i; i < 32; i++)
    {
        bin[i] = (number % 2) + '0';
        number /= 2;
    }
}