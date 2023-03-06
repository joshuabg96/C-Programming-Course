/*
    Use the function fopen to probe that a file exist or not
*/

#include <stdio.h>
#include <stdlib.h>

FILE *fd;

int main() {

    char Address[] = "hola.txt";
    fd = fopen(Address,"r"); 

    if (fd == NULL){
        printf("File do not exist\n");
    }else{
        printf("File found\n");
        printf("File Address: %s",Address);
    }

    return 0;
}