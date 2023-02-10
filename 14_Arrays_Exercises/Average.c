/*
    Get all Max grades and calculate the semester average and define if he passed the semester
    or failed
    Subjects: 6
    minimum grade: 70
*/
#include <stdio.h>

int main()
{
    float grades[6], Average = 0;
    for (int i = 0; i < 6; i++)
    {
        fflush(stdin);
        printf("Introduce the grade number %i\n", i+1);
        scanf("%f", &grades[i]);
    }  
    for (int i = 0; i < 6; i++)
    {
        Average = Average + grades[i];
    }
    Average = Average / 6;
    if (Average >= 70)
    {
        printf("\nCongratulation Max, you passed your semester with %f", Average);
    }
    else
    {
        printf("\nSorry Max, You failed your semester with %f", Average);
    }
    
    
    
}