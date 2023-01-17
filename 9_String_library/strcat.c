/*
    Function strcat is used to concatenate 2 strings
    it is located in string.h library

    strcat(First_Part[], Second_Part[]) <-- The Second parameter will be concatenated in First array

    First_Part[] = First_Part[] + Second_Part[] <-- Result
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char String1 [] = "Hello ";
    char String2 [] = "World!";
    char Final[20];

    strcat(Final, String1);         // The result will be Final + String1
    strcat(Final, String2);         // The result will be Final + String2

    printf("%s", Final);            
}