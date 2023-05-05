#include <stdio.h>
#include <stdlib.h>

void swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

void swap_Pointer(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
    int a,b;
    a = 10;
    b = 20;
    printf("Before swap %d %d\n",a,b);
    swap(a,b);
    printf("After swap %d %d\n", a,b);
    swap_Pointer(&a, &b);
    printf("After swap Pointer %d %d\n", a,b);
}