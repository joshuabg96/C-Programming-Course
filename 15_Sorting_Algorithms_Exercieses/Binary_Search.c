/*
    Binary Search must be used with sorted arrays
    It is based in divide the arrays positions
*/
#include <stdio.h>

int main()
{
    int Array[] = {2,4,6,8,10,12,14,16,18,20}, Target, FindIn = -1;
    int left = 0, right = 10, Middle;       //<-- The right value shall be the size of the array

    printf("What even number do you want? \n");
    scanf("%i",&Target);
    
    while (left <= right)
    {
        Middle = (left + right) / 2;
        if (Target == Array[Middle])
        {
            printf("the Value %i is in position %i of the array", Target, Middle);
        }
        if (Target < Array[Middle])
        {
            right = Middle - 1;
        }
        else
        {
            left = Middle +1;
        }   
    }
}