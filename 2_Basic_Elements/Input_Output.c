#include <stdio.h>

int main()
{
    char e[40];

    printf("Type a value: \n");             // Printf is used to print values at the console
    scanf("%c",&e);                         // Scanf is used to get values from the keyboard

    printf("The value is %c",e);            // %c is to be able to print char variables at the console
}