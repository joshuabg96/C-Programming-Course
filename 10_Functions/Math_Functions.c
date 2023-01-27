/*
    Some Math Functions are:
    ceil(x)     <-- rounded up
    fabs(x)     <-- absolute value
    floor(x)    <-- rounded down
    sqrt(x)     <-- square root
    fmod(x,y)  <-- Residue of the division x/y
    pow(x,y)    <-- Power of x to y
*/
#include <stdio.h>
#include <math.h>

int main()
{
    float a = 10.6, b = -10,c = 9, d = 10, e = 2;
    printf("%f Rounded up = %f\n", a, ceil(a));
    printf("%f absolute value = %f\n", b, fabs(b));
    printf("%f rounded down = %f\n", a, floor(a));
    printf("%f square root = %f\n", c, sqrt(c));
    printf("%f/%f residue of the division = %d\n", a,e, fmod(a,e));
    printf("%f^%f power = %f\n", c, e, pow(c,e));
}