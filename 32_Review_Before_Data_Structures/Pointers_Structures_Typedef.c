/*
    Create a structure using typedef called person and create a instance called client
    It has to contain age, money and name.
    Change this data using different structures pointer sintaxis
*/

#include <stdio.h>

typedef struct people
{
    int Age;
    float Money;
    char Name[20];
}Client;

// Create a Client Typedef structure called Jhon and a Client Typedef pointer called pJhon
Client Jhon, *pJhon = &Jhon;

int main()
{
    Jhon.Age = 20;                              //<-- One way to assign a value
    printf("Jhon is %d years old\n", Jhon.Age);
    (*pJhon).Age = 30;                          //<-- One way to assign a value
    printf("Jhon is %d years old\n", Jhon.Age);
    pJhon->Age = 25;                            //<-- One way to assign a value
    printf("Jhon is %d years old\n", Jhon.Age);
}