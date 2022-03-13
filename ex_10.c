//
// Created by marye on 2022-03-13.
//

/**
 * Write a program in C to check whether two given strings are an anagram. You must use pointers in this task.
 * Test Data :
 * Input the first String : spare
 * Input the second String : pears
 *
 * Expected Output :
 * spare and pears are Anagram.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define PROPMT_1 "Input the first String :\n"
#define PROPMT_2 "Input the second String :\n"
#define MAX_INPUT 100


int isAnagram(char *word_1, char *word_2);


int main()
{
    char *input_1 = malloc(sizeof (char) * MAX_INPUT);
    char *input_2 = malloc(sizeof (char) * MAX_INPUT);
    int boolean = 0;
    int length_1;
    int length_2;

    printf(PROPMT_1);
    fgets(input_1, MAX_INPUT, stdin);

    printf(PROPMT_2);
    fgets(input_2, MAX_INPUT, stdin);

    length_1 = strlen(input_1);
    length_2 = strlen(input_2);

    if (length_1 == length_2)
    {
        boolean = isAnagram(input_1, input_2);
    }

    strtok(input_1, "\n");
    strtok(input_2, "\n");

    if(boolean == 1)
    {
        printf("%s and %s are anagram.\n", input_1, input_2);
    } else
    {
        printf("%s and %s are not anagram.\n", input_1, input_2);
    }

    free(input_1);
    free(input_2);
    return  0;
}

int isAnagram(char *word_1, char *word_2) {

    int i;
    int j;
    int anagram = 0;
    int counter = 0;
    int length = strlen(word_2) - 1;
    char cpy_1[length];
    char cpy_2[length];

    strcpy(cpy_1, word_1);
    strcpy(cpy_2, word_2);

    for(i = 0; i <= length; i++)
    {
        for(j = 0; j < length; j++)
        {
            if(cpy_1[i] == cpy_2[j])
            {
                counter ++;
            }
        }
    }

    if (counter == length)
    {
        anagram = 1;
    }

    return anagram;
}
