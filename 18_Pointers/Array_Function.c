/*
    When you want to send an array as function parameter
    it has to be used as a pointer, if you modify the Function array you will
    be modifying the original.
*/
#include <stdio.h>

void Array(int Array[],int dimention){
    for(int i = 0; i<dimention;i++){
        printf("Give me a number for [%d] position:\n",i+1);
        scanf("%d",&Array[i]);
    }
}


int main() {

    int myVector[5];
    Array(myVector,5);                  //<-- Send the Array with the size

    //<-- Original Array were modified so we can print it
    for (int x = 0; x < 5; x++){        
        printf("%d\n",myVector[x]);
    }

    return 0;
}