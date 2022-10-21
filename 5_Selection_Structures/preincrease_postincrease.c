/*
    Preincrease:
    b = ++a  <-- first the a variable increases in 1 and after that the value of increased variable is assigned to b

    Postincrease
    d = c++ <-- first the c variable is assigned to d and after that the c varible increases in 1
*/
#include <stdio.h>

int main()
{
    int a = 0;              
    int b = ++a;                            // b = 1 and a = 1

    printf("The value of a is %i\n",a);
    printf("The value of b is %i\n",b);
    printf("\n\n");

    int c = 0;
    int d = c++;                            // d = 0 and c = 1

    printf("The value of c is %i\n",c);
    printf("The value of d is %i\n",d);
}