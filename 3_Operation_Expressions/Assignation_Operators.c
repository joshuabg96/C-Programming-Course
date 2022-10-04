#include <stdio.h>

int main()
{
    int a,b;          // Having this variables 

    a = 5;              // Assignation, now the variable a is equal to 5
    b = 10;             // Assignation, now the variable b is equal to 5
    
    printf("After the assignation the variable a is %i and variable b is %i\n", a, b);

    a += 1;             // Add and assignment, is the same as a = a + 1
    b -= 1;             // Substract and assignment, is the same as b = b - 1

    printf("After the assignation the variable a is %i and variable b is %i\n", a, b);

    a *= 2;             // Multiply and assignment, is the same as a = a * 2
    b /= 3;             // Division and assignment, is the same as b = b / 3

    printf("After the assignation the variable a is %i and variable b is %i\n", a, b);

    a %= 2;             // Module and assignment, is the same as a = a % 2

    printf("After the assignation the variable a is %i and variable b is %i\n", a, b);
}   