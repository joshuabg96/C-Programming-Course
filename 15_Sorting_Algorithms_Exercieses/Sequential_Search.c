/*
    For a sequential Search you have to compare every single value of the array 
    and compare with the value that we are looking for
*/
#include <stdio.h>

int main()
{
    int Array[5], target, flag = -1;
    for (int i = 0; i < 5; i++)
    {
        fflush(stdin);
        printf("Give me a integer value \n");
        scanf("%i",&Array[i]);
    }
    fflush(stdin);
    printf("Which  value are you looking for?\n");
    scanf("%i",&target);
    for (int i = 0; i < 5; i++)
    {
        if (Array[i] == target)
        {
            flag = i;
            break;
        }        
    }
    if (flag != -1)
    {
        printf("The value %i is in place number %i", target, flag);
    }
    else
    {
        printf("The value %i is not in the array", target);
    }   
}