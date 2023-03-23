/*
    Bubble sort is a simple Sorting Althorithm that works with a list of numbers
    we have to evalute first two of them, if the first value is higher that the second
    it has to be changed the position and so on.
    It is necessary to check the list many times to be sure that all the values are sorted
    correctly
*/
#include <stdio.h>

int main()
{
    int array[5] = {5,4,3,2,1};
    int temp = 0;

    for (int i = 4; i > 0; i--) // Maximum iterations to have the array sorted out = ArraySize - 1
    {
        for (int j = 1; j < 5; j++)     // start with value number 1 and evaluate value 1 and 0 
        {
            if (array[j] < array[j-1])      // If the Value j are lower than 1 value before, switch
            {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
            
        }
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    
}