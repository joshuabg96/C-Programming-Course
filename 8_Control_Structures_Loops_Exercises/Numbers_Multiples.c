// Write the multiples of a number that the result is less than 100
#include <stdio.h>

int main()
{
    int multiples = 1, number, i = 1;
    printf("Give a number\n");
    scanf("%i", &number);
    

    do
    {
        multiples = number * i;
        printf("%i * %i = %i\n", number, i, multiples);
        i++;
    } while (number * i <= 100);
    
}