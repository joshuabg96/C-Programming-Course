/*
    Create a structure called Students that must have the following members
    Name
    Age
    Average
    Request the data for 3 Students and compare which have higher average
    and print the result
*/
#include <stdio.h>

struct Student{
    char name[20];
    int Age;
    float Average;
}students[3];

int main()
{
    int position;
    float Higher = 0.0;
    for (int i = 0; i < 3; ++i) {
        fflush(stdin);
        printf("Name of the Student %d: ", i+1);
        gets(students[i].name);

        printf("Age of the Student %d: ", i+1);
        scanf("%d", &students[i].Age);

        printf("Average of the student %d: ", i+1);
        scanf("%f", &students[i].Average);
        printf("\n");
    }

    for (int i = 0; i < 3; ++i) {
        if(students[i].Average > Higher){
            Higher = students[i].Average;
            position = i;
        }
    }

    printf("The Higher average is for: \n");
    printf("Name: %s\n", students[position].name);
    printf("Age: %d\n", students[position].Age);
    printf("Average: %.2f\n", students[position].Average);
}
