// Calculate the factorial of a number
#include  <stdio.h>

int main()
{
    int number, factorial = 1;
    printf("Give me a number\n");
    scanf("%i", &number);
    
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("The factorial of %i is %i", number, factorial);
}