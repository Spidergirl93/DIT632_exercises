//
// Created by marye on 2022-03-12.
//

/**
 * (((NOT FINISHED YET)))
 * Write a program in C to print all permutations of a given string using pointers.
   Expected Output :
     The permutations of the string are :
     abcd abdc acbd acdb adcb adbc bacd badc bcad bcda
     bdca bdac cbad cbda cabd cadb cdab cdba dbca dbac
     dcba dcab dacb dabc
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void permutate(char *word);

int factorial(int n);

int main()
{
    char given_string[] = "abcd";

    permutate(given_string);
}

void permutate(char *word) {

    int n = strlen(word);

    for(int i = 0; i < n ; i++)
    {
        for(int j = i; j < n; j++)
        {
            char copy_word[n];
            strncpy(copy_word, word, n);
            char temp = copy_word[i];
            copy_word[i] =copy_word[j];
            copy_word[j] = temp;
            printf("%s  ", copy_word);
        }
    }
}

int factorial(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++)
    {
        result = i * result;
    }
    return result;
}



