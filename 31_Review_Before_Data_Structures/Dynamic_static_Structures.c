#include <stdio.h>

//Static Struct
typedef struct Person
{
    int dni;
    char name[20];
    int age;
};

//Dynamic Struct
typedef struct Node
{
    int value;
    struct Node* next;
}Node;

int main()
{
    
}