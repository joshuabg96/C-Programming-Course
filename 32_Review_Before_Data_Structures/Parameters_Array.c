#include <stdio.h>

void Array(int array[])
{
    array[0] = 1;
    array[1] = 2;
    array[2] = 3;
    array[3] = 4;
    array[4] = 5;
    
}

int main()
{
    int array[] = {0,0,0,0,0};
    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }
    printf("\n\n");
    Array(array);
    for (int i = 0; i < 5; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }
}