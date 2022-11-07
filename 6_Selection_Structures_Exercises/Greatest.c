/*
    Calculate the greatest number of given
*/
#include <stdio.h>

int main()
{
    int first, second;

    printf("Give me first number\n");
    scanf("%i", &first);
    printf("Give me second number\n");
    scanf("%i", &second);

    if (first > second)
    {
        printf("the number %i is the greatest", first);
    }
    else if (second > first)
    {
        printf("the number %i is the greatest", second);
    }
    else
    {
        printf("both numbers are the same");
    }
    
    
}