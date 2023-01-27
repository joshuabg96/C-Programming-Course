/*
    A recursive function is a fucntion that call itselves
    A typical example is to use it to calculate a factorial number
*/
#include <stdio.h>

long factorial(int n);

int main() {

    int number;

    printf("Write a number\n");
    scanf("%i",&number);

    printf("the factorial of %i is %li\n",number,factorial(number));

    return 0;
}

long factorial(int n){

    if (n<=1)
    {
        return 1;           // exit condition, if you do not have it it will keep in the loop
    }else
    {
        return (n*factorial(n-1));      // Recursivity, it is calling itself
    }

}
