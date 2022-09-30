#include <stdio.h>
#include <stdbool.h>

int main()
{                                   //Bits  Min             Max
    bool bool_var = true;           // 8     0              1       <-- True or False
    char char_var = 'c';            // 8    -128            127
    int int_var = 100;              // 32   -2147483648     2147483647
    float float_var = 1.5;          // 32   1.17549e-38     3.40282e38      <-- decimals
    double double_var = 100.5;      // 64   2.22507e-308    1.79769e308     <-- decimals
}