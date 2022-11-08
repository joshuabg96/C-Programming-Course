/*
    For: we have a variable that we have to initialize and increment every iteration
    until the condition is met

    Structure:
    for(initialization, condition, increase)
    {
        Code
    }
*/
#include <stdio.h>

int main()
{
    // Variable i initialized, condition while i < 10, increase by 1
    for (int i = 0; i < 10; i++)                // As soon as i == 10  the for breaks
    {
        printf("the currect value of i = %i\n", i);
    }
}