/*
    Create a function for each basic operation
    addition, substraction, multiplication and division
    and call them in the main function
*/
#include <stdio.h>

void Addition(int n1, int n2);
void Substraction(int n1, int n2);
void Multiplication(int n1, int n2);
void Division(int n1, int n2);

int main()
{
    int option, n1, n2;
    printf("Select one option\n1)Addition 2)Substraction 3)Multiplication 4)Division\n");
    scanf("%i", &option);
    fflush(stdin);
    printf("Give 2 numbers\n");
    scanf("%i", &n1);
    fflush(stdin);
    scanf("%i", &n2);

    switch (option)
    {
    case 1: 
        Addition(n1, n2);
        break;
    case 2:
        Substraction(n1, n2);
        break;
    case 3:
        Multiplication(n1, n2);
        break;
    case 4:
        Division(n1, n2);
        break;
    default:
        printf("\nYou didn't select a correct option, bye bye");
        break;
    }
}


void Addition(int n1, int n2){

    int result;
    result = n1+n2;
    printf("The operation %i + %i = %i",n1, n2, result);

}

void Substraction(int n1, int n2){

    int result;
    result = n1-n2;
    printf("The operation %i - %i = %i",n1, n2, result);

}

void Multiplication(int n1, int n2){

    int result;
    result = n1*n2;
    printf("The operation %i * %i = %i",n1, n2, result);

}

void Division(int n1, int n2){

    int result;
    result = n1/n2;
    printf("The operation %i / %i = %i",n1, n2, result);

}