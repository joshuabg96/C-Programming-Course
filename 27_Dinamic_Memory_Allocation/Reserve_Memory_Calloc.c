#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *c, word[50];                          // Create the array where the word will be saved and the pointer

    printf("Write a word ");    
    gets(word);                                 // Save the word in word array

    c = calloc(strlen(word)+1,sizeof(char));    // Reserve memory with the size of the array
    strcpy(c,word);                             // Copy the array to the memory location reserved before

    printf("Word: %s",c);                       // Print the Word from the array

    return 0;
}