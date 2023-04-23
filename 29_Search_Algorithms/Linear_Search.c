/*
    This is the most simple way to look for a value in an array
    We simply traverse the list completely and match each element 
    of the list with the item whose location is to be found.
*/
#include <stdio.h>

int main()
{
    int array[] = {1,2,3,4,5};
    int data = 3;                   //<-- Vale we are looking for

    for (int i = 0; i < 5; i++)
    {
        if (array[i] == data)
        {
            printf("Value %i is in array[%i]", data, i);
            break;
        }
    }    
}