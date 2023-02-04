/*
    Determines if a number is even or odd
*/
#include <stdio.h>

int Even();

int main() {

    int number, Result;
    printf("Write a number\n");
    scanf("%i",&number);

    Result = Even(number);

    if (Result==0)
    {
        printf("The number is Even\n");
    }else
    {
        printf("The number is Odd\n");
    }
    
    return 0;
}

int Even(int n2){

    if (n2%2==0)
    {
        return 0;
    }else
    {
        return 1;
    }
    
    return n2;
}