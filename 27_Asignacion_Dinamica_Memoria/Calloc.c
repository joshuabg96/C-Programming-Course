#include <stdio.h>

//Calloc y Malloc son iguales, solo su sintaxis es diferente
// calloc(Número de lugares, tamaño de cada lugar)

int main()
{
    int *p1;
    p1 = calloc(5,sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("Escribe un numero: ");
        scanf("%i",&p1[i]);
    }
    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", p1[i]);
    }
}