/*
    We can move throught the array knowing the start of the array 
    ! Note: This will not always work because we can have some values after 
    ! the Array values, but is a possibility 
*/

#include <stdio.h>

int main() {

    // Array declaration
    int array[5] = {1,2,3,4,5};

    //Create a pointer to the start of the array
    int* ArrayPointer = &array[0];

    // We can move throught the Array without know the size 
    while (*ArrayPointer != NULL){
        printf("\n %d",*ArrayPointer);
        ArrayPointer++;                 //Add 1 to the address
    }
}