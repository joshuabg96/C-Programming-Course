/*
    While loop: While the condition is met, the code will be executed

    Structure:
    while(Conditional)
    {
        Code
    }
*/
#include <stdio.h>

int main()
{
    int i = 10;
    // While the variable i > 0 the program will print the i variable
    // as soon as the variable i == 0 the program will finish 
    while (i > 0)                      
    {
        printf("Current value %i\n", i);
        i--;
    }
    printf("The variable i = %i", i);
    
}