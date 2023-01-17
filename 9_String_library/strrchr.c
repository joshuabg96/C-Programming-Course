/*
    The function strrchr return the rest of the string starting from the given character
    it is located in string.h library

    strrchr(String, Character);
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char Alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char Character;

    printf("Write a letter where you want to start the return string\n");
    scanf("%c", &Character);

    printf("The resulting chain is the following: %s", strrchr(Alphabet, Character));
}