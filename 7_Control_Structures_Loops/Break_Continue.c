/*
    continue: used to continue with the code, for example if you have a condition that 
    does not do anything but you want to have the condition you can add the continue line
    and the code will continue

    break: it is used to break loops, for example if a condition is met, you can add the line
    break and the loop will finish

    Structure:

*/

#include <stdio.h>

int main()
{
    printf("\nbreak\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", i);
        if (i == 10)
        {
            break;                          // Last number will be the 10
        }
        
    }
    printf("\ncontinue\n");
    for (int i = 0; i < 20; i++)
    {
        printf("%i\n", i);
        if (i == 10)
        {
            continue;                       // All the number will be printed
        }
        
    }
    
}