/*
    Function strlen return the length of the string, it includes spaces
    it is located in string.h library

    strlen(String)

*/
#include <stdio.h>
#include <string.h>

int main()
{
    char string[200];
    printf("Write something\n");
    gets(string);                           // <-- This time i used "gets" because it acepts spaces

    printf("The length of what you wrote is %i", strlen(string));
}