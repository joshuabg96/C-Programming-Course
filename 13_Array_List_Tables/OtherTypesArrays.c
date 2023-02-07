/*
    You can change the data type of an array to the following data types
    char
    int
    float
    etc.

    With char dataType you can create a String as follow
    char Name[30] = "Joshua"; <-- The array lenght must be at lest the lengh of the string
*/
#include <stdio.h>

int main()
{
    char Name[30] = "Joshua";
    float Grades[5] = {95.3, 90.4, 80.65, 86.7, 99.5};

    printf("%s had the following grades this semester:\n", Name);
    for (int i = 0; i < 5; i++)
    {
        printf("Subjetc %i: %f\n", i+1, Grades[i]);
    }
    
}