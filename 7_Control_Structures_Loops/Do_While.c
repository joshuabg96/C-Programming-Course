/*
    Do-While Loop: First the code is executed and after that the condition is verified

    Structure:
    do
    {
        Code
    }while(Condition)
*/
#include <stdio.h>

int main()
{
    int i = 0;
    do
    {
        printf("The current value of i = %i\n", i);
        i++;
    } while (i < 20);
    printf("The final value of i = %i", i);
}