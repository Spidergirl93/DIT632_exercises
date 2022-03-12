//
// Created by marye on 2022-03-12.
//

/**
 * Write a program to read a string from the console/stdin and count the number of chars, words, and lines, and print
 * these quantities.
 */

#include <stdio.h>
#include <string.h>

#define PROMPT "Please enter your life changing sentence: \n"
#define MAX_LIMIT 1000

int main()
{
    char input[MAX_LIMIT];
    int charCounter = 0;
    int wordCounter = 0;
    int lineCounter = 0;

    printf(PROMPT);
    fgets(input, MAX_LIMIT, stdin);

    for(int i = 0; i < strlen(input); i++)
    {
        if(input[i] != ' ' && input[i] != '\n')
        {
            charCounter ++;
        } else if(input[i] == ' ')
        {
            wordCounter ++;
        } else if(input[i] == '\n')
        {
            lineCounter ++;
        }

    }
    if(charCounter != 0)
    {
        wordCounter++;
    }

    printf("There are %d characters, %d words and %d lines in your text.", charCounter, wordCounter, lineCounter);

    return 0;
}