/*
    Structure:
    Condition ? Action_If_True; : Action_If_False;
*/

#include <stdio.h>


int main()
{
    int number;

    printf("Write a number ");
    scanf("%i", &number);

    (number % 2 == 0) ? printf("The number is Par") : printf("The number is Odd");
}