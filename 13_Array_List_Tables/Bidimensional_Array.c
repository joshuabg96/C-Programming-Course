/*
    You can create tables or arrays of N dimensions 
    int TwoDimensions[2][5] = {{1,2,3,4,5},{6,7,8,9,10}}; <-- Table of 2x5

    With a graphical representation of the table of 2x5
    1 2 3 4 5
    6 7 8 9 10
    
*/
#include <stdio.h>

int main()
{
    int TwoDimensions[2][5] = {{1,2,3,4,5},{6,7,8,9,10}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("TwoDimensions[%i][%i] = %i\n", i, j, TwoDimensions[i][j]);
        }
    }    
}