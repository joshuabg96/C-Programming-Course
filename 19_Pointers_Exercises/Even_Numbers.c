/*
    Fill an array with 10 numbers, after that using pointers indicate which are the Even
    Numbers and their memory Address
*/

#include <stdio.h>

int main(){

    int numbers[10],*PNumber;

    for (int i = 0; i < 10; ++i) {
        printf("Introduce the number [%d]: ",i);
        scanf("%d",&numbers[i]);
    }

    PNumber = numbers;

    for (int i = 0; i < 10; ++i) {
        if(*PNumber%2 == 0){
            printf("The number %d is even",*PNumber);
            printf(" and its Memory Address is %p\n",PNumber);
            printf("\n");
        }
        PNumber++;
    }

    return 0;
}
