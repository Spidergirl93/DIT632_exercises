//
// Created by marye on 2022-03-11.
//

/**
 * Write a function that prints an unsigned 32-bit integer in binary form.
The display format should include a separator at byte boundaries.
Example:
print_bin(0) => 00000000.00000000.00000000.00000000
print_bin(1) => 00000000.00000000.00000000.00000001
print_bin(2) => 00000000.00000000.00000000.00000010
print_bin(43) => 00000000.00000000.00000000.00101011
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void convert_to_bin(unsigned int *integer);

int main(int argc, char *argv[])
{
    unsigned int *integer = malloc(sizeof (int));
    *integer = atoi(argv[1]);
    convert_to_bin(integer);
    free(integer);
    return 0;
}

void convert_to_bin(unsigned int *integer) {
    int i = 0;
    char bin[35];
    for ( ; i < 35; i++)
    {
       if (i == 8 || i == 17 || i == 26)
       {
           bin[i] = '.';
       } else if (*integer == 0)
       {
           bin[i] = '0';
       } else
       {
           bin[i] = *integer % 2 + '0';
           *integer = *integer / 2;
       }
    }
    for(int j = strlen(bin); j >= 0; j--)
    {
        printf("%c", bin[j]);
    }
}
