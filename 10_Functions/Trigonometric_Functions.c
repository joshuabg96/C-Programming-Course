/*
    Some Trigonometric functions are
    acos(x)     <-- calculate arc cosine
    asin(x)     <-- Calculate arc sine
    atan(x)     <-- Calcualte Arc Tang
    cos(x)      <-- Calculate cosine
    sin(x)      <-- Calculate sine
    tan(x)      <-- Calculate tangent
*/
#include <stdio.h>
#include <math.h>           //<-- All the functions are in math.h lib

int main()
{
    // The way that you have to use it is the same for all the functions
    float calculation, degrees = 45;
    calculation = acos(degrees);
    printf("Arc Cosine of %f = %f\n", degrees, calculation);
    calculation = asin(degrees);
    printf("Arc Sine of %f = %f\n", degrees, calculation);
    calculation = atan(degrees);
    printf("Arc tangent of %f = %f\n", degrees, calculation);
    calculation = cos(degrees);
    printf("Cosine of %f = %f\n", degrees, calculation);
    calculation = sin(degrees);
    printf("Sine of %f = %f\n", degrees, calculation);
    calculation = tan(degrees);
    printf("Tangent of %f = %f\n", degrees, calculation);
}
