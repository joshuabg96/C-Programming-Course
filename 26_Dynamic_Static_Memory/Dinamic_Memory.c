/*
    The Dynamic memory is reserved in execution. the principal advantage is that the size
    of the variable can change in the program execution. the use of dinamic memory is necesary 
    when at the develop of the program we do not know the number of data that we will use
    
    You can use malloc to reser dynamic memory 
    variable = (dataType*)malloc(RequiredBytes)
    It returns a pointer where the memory is reserved

    Hint: You can use sizeof(DataType) to calculate the number of byte that the data type uses

    After reserve the dynamic memory, we are the responsible of free that memory, we can use free
    function
    free(Pointer)
*/
#include <stdio.h>

int main()
{
    int *String;
    int characters = 0;
    printf("How many characteres do you want to enter ");
    scanf("%i", &characters);
    fflush(stdin);
    String = (char*)malloc(sizeof(char)*characters);            //<-- Reserve the number or characters
    printf("\nPlease type %i characteres ", characters);
    scanf("%s", &*String);                              //<-- save the character in the dynamic memory
    printf("\nWhat you wrote is: %s", String);          //<-- Print what is in dynamic memory
    free(String);
}

