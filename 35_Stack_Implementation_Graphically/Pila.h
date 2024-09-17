#include <stdio.h>
#include <stdlib.h>

typedef struct PILA
{
    int tope,
    int lista [100];
}Pila;

Pila createPila();

int isEmpty(Pila);

void Push(Pila*, int);

int pop(Pila*);

int tope(Pila);


Pila createPila()
{
    Pila p;
    p.tope = 0;
    return p;
}

int isEmpty(Pila p)
{
    if (p.tope == 0)
    {
        return 1;
    }
}

void Push(Pila* p, int x)
{
    p.lista[p.tope] = x;        // Add the x value to next position
    p.tope ++;                  // increase the limit + 1
}

int pop(Pila* p)
{
    if (isEmpty(*p) == 1)
    {
        printf("Pila is empty");
        return -1;
    }
    else
    {
        int aux = p.lista[p.tope - 1];
        p.tope--;
        return aux;
    }
}

int tope(Pila p)
{
    if (isEmpty(p) == 1)
    {
        printf("Pila is empty");
        return -1; 
    }
    else
    {
        return p.lista[p.tope - 1];
    }
}