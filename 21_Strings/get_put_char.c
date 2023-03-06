

#include <stdio.h>

int main() {

    int c;
    while (EOF != (c=getchar()))        //<-- get the user input
    { 
        putchar(c);     //<-- Write the caracter until enter key appears
    }
    

    return 0;
}