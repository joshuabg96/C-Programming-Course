/*
    What is an array?
    Array is a data structure containing data fo the same type

    How do you initialize an array
    dataType ArrayName [] = {Data1, Data2, ... , DataN};
    Or
    dataType ArrayName [Array Lenght];
    Or
    dataType ArrayName [ArrayLenght] = {Data1, Data2, ... , DataN};
*/

#include <stdio.h>

int main() 
{
    // Integer Array called array with 3 values
    int array[3] = {24,5,96};

    // How to access to array values
    printf("First Value %i",array[0]);
    printf("\nSecond Value %d",array[1]);
    printf("\nThird Value %d",array[2]);

    // How to change the value of the array
    array[0] = 54;
    printf("\n\nThe new value of the index 0 is: %d\n\n",array[0]);

    // How to access to array value with a for loop
    for (int i = 0; i < 3; i++)
    {
        // You can access to the value of every index calling the name with the index that you want
        // arra[index] <-- It could be a variable
        printf("Index %i value of the array is: %i\n", i, array[i]);  //
    }   

    return 0;
}