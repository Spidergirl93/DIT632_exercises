//
// Created by marye on 2022-03-11.
//
/**
 * Write a function
uint16_t make_16bit(uint8_t least_significant, uint8_t most_significant);
that combines the given bytes into a 16-bit integer and returns it as the result.
Note: In practice, the first argument contains 8 least significant bits of an unsigned 16-bit integer and the second
contains the 8 most significant bits.
Example:
print_bin(1) => 00000000.00000000.00000000.00000001
print_bin(7) => 00000000.00000000.00000000.00000111
print_bin(make_16bit(7, 1)) => 00000000.00000000.00000001.00000111
 */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>

uint16_t * make_16bit(uint16_t *least_significant, uint16_t *most_significant);

void binary_converter(uint16_t *number);

int main()
{
    uint16_t *lSig = malloc(sizeof (uint16_t));
    uint16_t *mSig = malloc(sizeof (uint16_t));
    uint16_t *result;

    *lSig = 1;
    *mSig = 7;

    result = make_16bit(lSig, mSig);

    binary_converter(result);

    free(lSig);
    free(mSig);
    free(result);
}

void binary_converter(uint16_t *number) {
    int i = 0;
    char bin[35];
    for ( ; i < 35; i++)
    {
        if (i == 8 || i == 17 || i == 26)
        {
            bin[i] = '.';
        } else if (*number == 0)
        {
            bin[i] = '0';
        } else
        {
            bin[i] = *number % 2 + '0';
            *number = *number / 2;
        }
    }
    for(int j = strlen(bin); j >= 0; j--)
    {
        printf("%c", bin[j]);
    }
}

uint16_t * make_16bit(uint16_t *least_significant, uint16_t *most_significant) {
    uint16_t *result = malloc(sizeof (uint16_t));

    *result = *least_significant << 8 | *most_significant;
    return result;
}
