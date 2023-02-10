/*
    Copy an array to another one using own function
*/
#include <stdio.h>

void CopyArray(int a[], int b[], int size);

void CopyArray(int a[], int b[], int size)
{
    for (int i = 0; i < size; i++)
    {
        b[i] = a[i];
    }
    
    
}

int main()
{
    int arrayOriginal[5] = {2,3,4,5,6};
    int arrayCopy[5];

    CopyArray(arrayOriginal, arrayCopy, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("ArrayCopy[%i] = %i\n", i, arrayCopy[i]);
    }
    
}