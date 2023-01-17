// Sum numbers between 1 to given number
#include <stdio.h>

int main()
{
    int number, i = 1, sum = 0;
    printf("Give a number\n");
    scanf("%i", &number);

    while (i <= number)
    {
        sum += i;
        i++;
    }
    printf("The sum of all numbers between 1 and %i is %i", number, sum);
    
}