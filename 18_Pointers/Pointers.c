/*
    Pointer is a variable that store a memory Address, and we can use it as following
    DataType *PointerName
    If you want to access to the value of the pointer you just have to call it
    for example:
    printg("%i", *PointerName);
    But if you want to see the Memory Address you have to use it as following:
    printf("%p", PointerName);

    If you want to see the address of a variable that is not a pointer you can 
    access as following:
    printf("%p", &Variable);

*/
#include <stdio.h>

int main()
{
    int number = 50;
    int *pNumber;
    printf("Data: %i",number);                          //Variable Data
    printf("\nAddress:  %p\n",&number);                 //Variable Memory Address

    pNumber = &number;                                  //Assign the Address to the pointer 
    printf("\nValue\n");
    printf("Data: %i\n",number);                
    printf("Data: %i\n",*pNumber);                      // Value of the pointer

    printf("\n\nMemory Address");
    printf("\nAddress: %p",&number);                    // Address of the Variable
    printf("\nAddress: %p",pNumber);
}