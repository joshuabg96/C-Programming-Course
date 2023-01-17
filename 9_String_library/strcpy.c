/*
    Function strcpy is used to copy a string from a variable to another variable
    it is located in string.h library

    strcpy(destiny[], source[]); <-- the destiny must have at least the size of the source
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char Source[] = "Hello World";          // <-- Array of 11 

    char Destiny[11];                       // <-- Array of 11

    strcpy(Destiny, Source);                // <-- strcpy(Destiny_Array, Source_Array);
    
    printf("%s", Destiny);                  // <-- Print Destiny array
}