/*
    A structure is a variable collection related with a name
    It can contain different variables of different types

    struct Name
    {
        datatype Name1
        .
        .
        .
        datatype NameN
    }
    Struct1 = {Name1, ... , NameN};
    .
    .
    .
    StructN = {Name1, ... , NameN};
*/

#include <stdio.h>

struct Person{
    char name[20];
    int age;
}
person1 = {"Jorge",19},
person2 = {"Ricardo",18};

int main()
{
    printf("\nHis name is: %s",person1.name);
    printf("\nHe is: %i Years Old\n\n",person1.age);

    printf("\nHis name is: %s",person2.name);
    printf("\nHe is: %i Years old",person2.age);
}