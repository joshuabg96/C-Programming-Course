/*
    Allocate Dinamic memory space for a name and after that free the used memory
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char name[20], *p_name;                 // Create the array for the name and the pointer
    int lenght;                             // Lenght of the name

    strcpy(name, "Josue");                  // Copy the name to the variable 
    lenght = strlen(name);                  // Get the lenght of the name

    p_name = malloc((lenght) * sizeof(char));   // allocate the memory for the name
    strcpy(p_name, name);                       // Copy the name to the memory reserved

    printf("Name: %s\n", p_name);               // Print the Name allocated in the reserved memory
    free(p_name);                               // free the pointer

    printf("Name: %s", p_name);                 // Print the reserved memory already freed
}