/*
    Reserve dynamic memory for 10 spaces character string
    Use realloc to expand the character string to 30 spaces
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *p_name, *p_FullName;                  // Create the pointers 

    p_name = malloc(10 * sizeof(char));         // Allocate memory for just 10 spaces

    strcpy(p_name, "Josue");                    // Add the name to the allocated memory
    printf("Name: %s", p_name);                 

    p_FullName = realloc(p_name, 30 * sizeof(char));        // Allocate memory for 30 spaces
    strcat(p_FullName, " Bernabe");                         // Add my last name

    printf("\nFull Name: %s", p_FullName);                  // Print my full name
}