/*
    It is an improvement of bubble sort and the procedure starts looking for the 
    higher or lower value of the list and place it in the correct place until we finish the list
*/
#include <stdio.h>

int main()
{
    int array[] = {10,1,6,3,2};
    int min = 0, temp = 0;

    for (int i = 0; i < 5; i++)
    {
        min = i;
        for (int j = i; j < 5; j++)
        {
            if (array[j] < array[min])
            {
                min = j;
            }            
        }
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }    
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
    
}
