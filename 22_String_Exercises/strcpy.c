/*
    Copy the String array to another one one with strcpy
*/

#include <stdio.h>
#include <string.h>

int main() {

    char cad1 [] = "Hello World";
    char cad2[30];

    strcpy(cad2,cad1);                  //<-- Copy the content of cad1 to cad2
    strcpy(cad2+5," Welcome to C");         // Replace World to Welcome to C

    printf("%s",cad2);

    return 0;
}