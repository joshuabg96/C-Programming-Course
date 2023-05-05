#include <stdio.h>

int main()
{
    int array[5] = {0,1,2,3,4};

    array[0] = 10;
    // Array = {10,1,2,3,4}

    array[4] = 100;
    // Array = {10,1,2,3,100}

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    
}