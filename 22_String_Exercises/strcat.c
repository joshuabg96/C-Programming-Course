/*
    Use strcat to add a string to another string
*/
#include <stdio.h>
#include <string.h>

int main() {

    char cad[] = "Hello World";
    strcat(cad," I'm programming C");

    printf("%s",cad);

    return 0;
}