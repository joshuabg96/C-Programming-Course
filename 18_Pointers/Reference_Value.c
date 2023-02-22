/*
    With this type of functions the value of the variable is modified
    Because what the function recives is the address of the variable
*/
#include <stdio.h>
void Add(int *a)                        // <-- The function recive the Address in a pointer
{
        *a += 1;                       //<-- Access to the value and modify it
}

int main() {

    int Number;
    printf("Write a number\n");
    scanf("%d",&Number);

    printf("\nValue before the function: %d",Number);
    Add(&Number);                       //<-- Send the address to the function 

    printf("\nValue after the function: %d",Number);
}