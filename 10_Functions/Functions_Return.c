/*
    Functions With Return

    DataType FuntionName (Parameters_Optional)
    {
        Datatype Variable;
        Code
        return Variable
    }
*/
#include <stdio.h>

int add(int a, int b)           // <-- You can change the dataType to any Type
{
    int c = 0;
    c = a + b;
}

int main()
{
    int result = 0, a, b;
    printf("Give me 2 numbers\n");
    scanf("%i", &a);
    fflush(stdin);
    scanf("%i", &b);
    result = add(a, b);

    printf("The result of %i + %i = %i", a, b, result);
}