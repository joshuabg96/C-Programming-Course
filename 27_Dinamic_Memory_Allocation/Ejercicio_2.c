#include  <stdio.h>
#include  <stdlib.h>

/* 
Hacer un programa con memoria dinamica y usando tres funciones
Que se pueda crear un arreglo dinámico dado por el usuario
1) obtener la cantidad de datos para regresarlos en una función
2) Leer los datos y llenar el arreglo dinámico por el usuario
3) Imprimir los datos dados por el usuario
*/

int ObtenerCantidad()
{
    int size = 0;
    printf("Cuantos datos quieres ingresar?\n");
    scanf("%d",&size);

    return size;
}

void LlenarDatos(int Arreglo[], int Size)
{
    printf("Ingresa los datos que quieres\n");
    for (int i = 0; i < Size; i++)
    {
        fflush(stdin);
        scanf("%d", &Arreglo[i]);
    }
}

void ImprimirDatos(int Arreglo[], int Size)
{
    for (int i = 0; i < Size; i++)
    {
        printf("%i ", Arreglo[i]);
    }
}

int main()
{
    int size, *Arreglo;
    size = ObtenerCantidad();
    Arreglo = malloc(size * sizeof(int));
    LlenarDatos(Arreglo, size);
    ImprimirDatos(Arreglo, size);
}