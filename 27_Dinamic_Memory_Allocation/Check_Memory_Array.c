/*
    Reserve memory space using malloc for a double type array with 1000 numbers
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    double *p_Array;
    p_Array = malloc(1000 * sizeof(double));
    if (p_Array == NULL)                        // Does not have enough memory to allocate the array
    {
        printf("Error with memory allocation");
    }
    else                                        // Memory allocated for the array
    {
        srand(time(NULL));
        for (int i = 0; i < 1000; i++)
        {
            p_Array[i] = rand();                // Fill the array with random numbers
            printf("%.2lf\n",p_Array[i]);       // Print every number of the array
        }
    }
    
}