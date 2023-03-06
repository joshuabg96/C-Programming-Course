/*
    You can use gets to fill a string with a user input
*/
#include <stdio.h>

int main() 
{

    char Word[20];
    printf("Write a word\n");
    gets(Word);

    printf("Word: %s",Word);
}