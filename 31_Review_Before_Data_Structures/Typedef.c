/*
    typedef is used to create new variable type, you can create a new struct type
    or int, whatever variable that you want
    Example
    typedef int MyInt;

    and if you want to use it you only have to do:
    MyInt VariableName;

    this is very usefull with structures
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student
{
    char name[20];
    int age;
    int grade;
}student;               //<-- This will be the name of the new data type

typedef int ParkingCars[12];        //<-- We are creating an array with 12 values


int main()
{
    student School[10];     // Here we are going to create 1 array that contains 10 student Structures
    
    strcpy(School[0].name,"Joshua");
    School[0].age = 26;
    School[0].grade = 8;

    printf("The student %s is %i and currently is coursing %i grade\n\n", School[0].name, School[0].age, School[0].grade);

    ParkingCars Morning = {0,0,0,0,0,5,10,30,50,60,70,70};    //Array for morning shift with number of cars of every hour
    ParkingCars Night = {60,55,58,45,50,40,30,25,10,5,5,0};      // Array for night shift with number of cars of every hour

    for (int i = 0; i < 12; i++)
    {
        printf("The number of cars in the parking at %i am is %i\n", i, Morning[i]);
    }

    for (int i = 0; i < 12; i++)
    {
        printf("The number of cars in the parking at %i pm is %i\n", i+12, Night[i]);
    }
    

}
