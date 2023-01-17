/*
    The function strlwr lowercase all letters
    it is located in string.h library

    strlwr(String)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string[100];
    printf("Write a text with upper and lower case letters\n");
    gets(string);                           // Using gets because scanf do not allow spaces

    printf("Original Text: %s\n", string);              // Original String with lower and upper case
    printf("All lowercase: %s\n", strlwr(string));      // All lowercase String
}