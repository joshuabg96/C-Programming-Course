/*
    Use strcmp to compare two strings
*/
#include <stdio.h>
#include <string.h>

int main() {

    char Word1[] = "Hello";
    char Word2[] = "Hello";

    if (strcmp(Word1,Word2)==0){
        printf("Both Words are the same\n");
    }else{
        printf("Words are different\n");
    }
}