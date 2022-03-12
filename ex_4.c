//
// Created by marye on 2022-03-12.
//
/**
 * Write a program to print the following pattern:
                                                      C
                                                   i     I
                                                 s         s
                                               b             b
                                             e                 e
                                           s                     s
                                          t s e b s i C i s b e s t
 */



#include <stdio.h>

#include <string.h>

 int main(int argc, char *argv[])
 {
     char expression[] = "Cisbest";

     for(int i = 0; i < strlen(expression); i++)
     {
         for(int j = 0; j < (strlen(expression) - i); j++)
         {
             printf("  ");
         }

         printf("%c", expression[i]);

         if(i != (strlen(expression) - 1))
         {
             for(int j = 0; j < 2*i; j++)
             {
                 printf("  ");
             }
         } else
         {
             for(int j = (strlen(expression) - 2); j >= 0; j--)
             {
                 printf(" %c", expression[j]);
             }
             printf(" ");
             for(int j = 1; j < (strlen(expression) - 1); j++)
             {
                 printf("%c ", expression[j]);
             }
         }

         if (i != 0)
         {
             printf("%c", expression[i]);
         }

         printf("\n");
     }
    return 0;
 }