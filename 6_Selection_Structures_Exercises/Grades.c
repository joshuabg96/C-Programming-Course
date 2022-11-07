/*
    Check if a student passed the exam or not
*/
#include <stdio.h>

int main()
{
    float grade;
    printf("Type the student grade\n");
    scanf("%f", &grade);

    if (grade >= 70)
    {
        printf("Congratulation the student passed the exam");
    }
    else
    {
        printf("Sorry the student didn't pass the exam");
    }
    
}