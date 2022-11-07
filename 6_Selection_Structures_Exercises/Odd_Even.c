/*
    Check if a number is odd or even
*/
#include <stdio.h>

int main()
{
    int number;
    
    printf("Give a number\n");
    scanf("%i", &number);

    if (number%2 == 0)
    {
        printf("The number %i is Odd", number);
    }
    else
    {
        printf("The number %i is Even", number);
    }
    
    

}