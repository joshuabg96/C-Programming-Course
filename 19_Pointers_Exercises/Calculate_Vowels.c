/*
    Create a function that counts the vowels in your name
*/
#include <stdio.h>
#include <string.h>

int CountVowels(char *name);

int main(){

    char name[50];

    printf("Introduce your name: ");
    fgets(name, 50, stdin);
    strtok(name, "\n");

    printf("The number of Vowels in your name is: %d\n", CountVowels(name));
}


int CountVowels(char *name){
    int counter = 0;

    while(*name){
        switch(*name){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U': counter++;
        }
        name++;
    }

    return counter;
}