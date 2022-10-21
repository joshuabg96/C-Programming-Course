/*
    Conditional IF

    Structure:
    if (Condition)
    {
        Action
    }
*/

#include <stdio.h>


int main()
{
    int a,b,c;                          // Create the variables
    

    printf("Type a number");            // Request the a number
    scanf("%i", &a);                    // Get the number
    printf("Type b number");            // Request the b number
    scanf("%i", &b);                    // Get the number

    c = a + b;                          // Do the addition

    if (c > 200)                                            // If the addition is greater than 200
    {
        printf("The sum of a and b is greater than 200");   // Print this
    }
    if (c < 200)                                            // If the addition is less than 200
    {
        printf("The sum of a and b is less than 200");      // Print this
    }
    if (c == 200)                                           // If the addition is equal to 200
    {
        printf("The sum of a and b is equal to 200");       // Print this
    }
}