/*
    Calculate the factorial of a number with recursion
*/
#include <stdio.h>

int Factorial(int number){
    int result;
    if (number<2)
    return 1;
    result = Factorial(number-1)*number;
    return result;
}

int main() {
    int n;
    printf("Factorial of: ");
    scanf("%i",&n);
    printf("\n%i",Factorial(n));
    return 0;
}