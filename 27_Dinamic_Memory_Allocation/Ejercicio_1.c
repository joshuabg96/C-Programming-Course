#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    int *dinamico = malloc(4 * sizeof(int));

    *dinamico = 10;                 //<-- Manera de entrar al primer valor
    *(dinamico + 1) = 20;           //<-- Otra manera de entrar al siguiente valor
    dinamico[2] = 30;               //<-- Entrar al siguiente valor de manera de arreglo

    // Se imprime lo que se acaba de hacer
    for (int i = 0; i < 3; i++)
    {
        printf("%i ",dinamico[i]);
    }
    printf("\n\n");


    realloc(dinamico, 10 * sizeof(int));        //<-- Cambiamos la cantidad de memoria dinámica solicitada
    
    // Se rellena la memoria dinámica solicitada
    for (int i = 0; i < 10; i++)
    {
        dinamico[i] = i*10;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%i ", dinamico[i]);
    }
    
    
    
}