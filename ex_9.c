//
// Created by marye on 2022-03-13.
//
/**
 * Write a program in C to count the number of vowels and consonants in a string using a pointer.
 * Test Data :
 * Input a string:
 * string Expected Output :
 * Number of vowels : 1
 * Number of consonants : 5
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//----------------------------------------------------------------------------------------------------------------------
#define PROMPT "Input a string: \n"   //Will be displayed to get the input from users
#define MAX_INPUT 1000                //Maximum allowable length of the user input
//----------------------------------------------------------------------------------------------------------------------
int vowel_counter(char *input, int input_length);
int cons_counter(char *input, int input_length);
//----------------------------------------------------------------------------------------------------------------------
int main()
{
    int vowel_num = 0;           //Initiation of the number of vowels in the input
    int cons_num = 0;            //Initiation of the number of consonants in the input
    int input_length = 0;        //The length of the string input
    char *input = malloc(sizeof (char) * MAX_INPUT);   //The variable that stores the input
//----------------------------------------------------------------------------------------------------------------------
    printf(PROMPT);                              //Ask for user input
    fgets(input, MAX_INPUT, stdin);   //Store the input in a variable
//----------------------------------------------------------------------------------------------------------------------
    input_length = strlen(input);                  //Get the length of the input
    vowel_num = vowel_counter(input, input_length);    //Count the number of vowels in the input
    cons_num = cons_counter(input, input_length);      //Count the number of consonants in the input
//----------------------------------------------------------------------------------------------------------------------
    printf("Number of vowels: %d\nNumber of consonants: %d", vowel_num, cons_num);  //Display the result
}


//Auxiliary methods-----------------------------------------------------------------------------------------------------
int cons_counter(char *input, int input_length) {
    int i = 0;                                  //Loop counter
    int result = 0;                             //Stores the number of consonants
    char input_cpy[input_length];               //Stores a copy of input
    strcpy(input_cpy, input);       //Copies the input into another variable to avoid changing it by
                                               // manipulating indices
    for(; i < input_length; i++)
    {
        if(input_cpy[i] != ' ' && input_cpy[i] != '\n' && input_cpy[i] != 'a' && input_cpy[i] != 'o' && input_cpy[i] != 'e'
        && input_cpy[i] != 'i' && input_cpy[i] != 'A' && input_cpy[i] != 'O' && input_cpy[i] != 'E'
        && input_cpy[i] != 'I')
        {
            result++;
        }
    }
    return result;
}

int vowel_counter(char *input, int input_length) {
    int i = 0;                                  //Loop counter
    int result = 0;                             //Stores the number of vowels
    char input_cpy[input_length];               //Stores a copy of input
    strcpy(input_cpy, input);       //Copies the input into another variable to avoid changing it by
                                               // manipulating indices
    for(; i < input_length; i++)
    {
        if(input_cpy[i] == 'a' || input_cpy[i] == 'o' || input_cpy[i] == 'e'
        || input_cpy[i] == 'i' || input_cpy[i] == 'A' || input_cpy[i] == 'O' || input_cpy[i] == 'E'
        || input_cpy[i] == 'I')
        {
            result++;
        }
    }
    return result;
}
