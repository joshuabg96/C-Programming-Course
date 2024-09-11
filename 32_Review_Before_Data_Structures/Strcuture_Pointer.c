/*
    We can create a pointer of a strcuture as following
    - First you have to create your strcuture
    - Next create a struct variable type
    - Matches the strcture address to the pointer
*/

#include <stdio.h>
#include <stdio.h>

//Create the structure
struct Rectangle
{
    int base;
    int heigh;
};


int main()
{
    struct Rectangle r = {base: 10, heigh: 5};      //<-- Create the struct variable
    
    struct Rectangle *p = &r;        //<--   Matches the structure address to the pointer

    r.base = 15;        //<-- Make a modification of the base lenght

    printf("Base: %d\n", r.base);
    (*p).base = 20;             //<-- This is one form to modify the value of a pointer
    printf("Base: %d\n", r.base);
    p -> base = 25;             //<-- other way to modify the value of a pointer
    printf("Base: %d\n", r.base);
    
    // We can use the strcuture pointer in dinamyc memory as following

    struct Rectangle *pointer;      //<-- Create the struct Rectangle pointer
    pointer = (struct Rectangle *)malloc(sizeof(struct Rectangle));     //<-- reserve the dynamic memory

    pointer->base = 10;         //This is the way to access o modify a strcuct pointer value
    pointer->heigh = 5;

    printf("Rectangle base: %d", pointer->base);
    printf("Rectangle base: %d", pointer->base);
}