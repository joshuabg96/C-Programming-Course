/*
    The insertion sort you have to star with the second value of the list
    and compare with all values on the left until find a lower value or
    the beginning of the list is reached.
    When any of that conditions is meet, we are going to insert the taken number.
*/
#include <stdio.h>

int main()
{
    int array[] = {5,3,1,10,2};
    int temp = 0, pos = 0;

    for (int i = 1; i < 5; i++)
    {
        pos = i;
        while (pos > 0 && (array[pos] < array[pos-1]))
        {
            temp = array[pos];
            array[pos] = array[pos - 1];
            array[pos - 1] = temp;
            pos--;
        }           
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%i ", array[i]);
    }
}
