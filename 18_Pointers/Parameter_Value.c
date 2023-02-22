/*
    This is the most used way to give a parameter to a function
    In this situation the variable is copied and stored in temporally memory
    This desappears after the called function ended

    void Function(int value)
    {
        value++;
    }
    int main()
    {
        int ValueMain = 100;
        Function(ValueMain);            <-- The Variable ValueMain were not modified by the Function
    }
*/
#include <stdio.h>

void add(int a){
        a += 1; 
}

int main()
{
    int Value;
    printf("Write a Value\n");
    scanf("%d",&Value);
    printf("\nValue before the function: %d",Value);
    add(Value);
    printf("\nValue after the function: %d",Value);        // The Value were not modified
}