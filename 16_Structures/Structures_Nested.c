/*
    We can Add a structure as a variable of another struct
    struct Struct1
    {
        datatype Name1
        .
        .
        .
        datatype NameN
    };

    struct Nested_Struct
    {
        Struct1 NameNestedStruct
        .
        .
        .
        datatype NameN
    }StructName;
*/
#include <stdio.h>

struct Address
{
    char Street[30];
    char City[30];
    int PostalCode;
};


struct Person{
    char name[20];
    int age;
    struct Address PersonAddress;
}People[2];

int main()
{
    for (int i = 0; i < 2; i++)
    {
        fflush(stdin);
        printf("Give me the name of the person number %i\n", i+1);
        gets(People[i].name);
        printf("How old is he/she?\n");
        scanf("%i", &People[i].age);
        fflush(stdin);
        printf("What is the street name where he/she lives\n");
        gets(People[i].PersonAddress.Street);
        printf("Which city?\n");
        fflush(stdin);
        gets(People[i].PersonAddress.City);
        printf("What Postal Code?\n");
        scanf("%i",&People[i].PersonAddress.PostalCode);
        fflush(stdin);
    }

    for (int i = 0; i < 2; i++)
    {
        printf("\nName of the person number %i: %s",i+1,People[i].name);
        printf("\nHe/She is: %i Years Old",People[i].age);
        printf("\nLives on %s street of %s Postal Code %i\n\n", People[i].PersonAddress.Street, People[i].PersonAddress.City, People[i].PersonAddress.PostalCode);
    }

}