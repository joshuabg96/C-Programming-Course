/*
    We can make a structure that contains another structures
    this is an array of structures and you can do it as follow
    struct Name
    {
        datatype Name1
        .
        .
        .
        datatype NameN
    }People[NumberOfPeople];
*/
#include <stdio.h>

struct Person{
    char name[20];
    int age;
}People[3];

int main()
{
    for (int i = 0; i < 3; i++)
    {
        printf("Give me the name of the person number %i\n", i+1);
        gets(People[i].name);
        printf("How old is he/she?\n");
        scanf("%i", &People[i].age);
        fflush(stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nName of the person number %i: %s",i+1,People[i].name);
        printf("\nHe/She is: %i Years Old\n\n",People[i].age);
    }

}