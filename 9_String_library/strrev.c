/*
    The function strrev Inverts the given String
    it is located in string.h library

    strrev(String)
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char String[] = "Hello World";

    strrev(String);                     // Invert the String, the result replaces the original

    printf("Inverted String: %s", String);      // Inverted String
}