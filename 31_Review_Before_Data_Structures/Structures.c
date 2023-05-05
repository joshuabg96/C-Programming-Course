#include <stdio.h>

struct Rectangle
{
    int base;
    int height;
};


int main()
{
    struct Rectangle R = {10,5}; //<-- Struct R with base = 10 and Height = 5
    R.base = 8;                     // <-- Base changed to 8
    R.height = 4;                   // <-- Height change to 4

    printf("The area of the rectangle with base %i cm and Height %i cm is %i cm2", R.base, R.height, R.base*R.height );
}