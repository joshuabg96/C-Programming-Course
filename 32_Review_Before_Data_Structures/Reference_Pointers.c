#include <stdio.h>

void function(int x);
void function2(int* x);

int main()
{
    int a = 10;

    function(a);                //<-- Call function giving a
    printf("%d\n", a);          //<-- Print 10

    function2(&a);               //<-- Call function giving "a" Addrees
    printf("%d\n", a);          //<-- Print 3
}

void function(int x)
{
    x = 3;
}

void function2(int* x)          //<-- function recives a pointer
{
    *x = 3;
}