#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cont, arreglo[]={35,40,45,50,55}, variable;
    int *puntero = calloc(10,sizeof(int));              // <-- Con calloc inicializa todos los espacios a 0

   // Imprimir las direcciones del un arreglo
   for (int i = 0; i < 10; i++)
   {
        printf("Direccion del arreglo[%d] = %p valor del arreglo[%d] = %d\n",i,&arreglo[i],i,arreglo[i]);
   }
    printf("\n");

   // Imprimir las direcciones del puntero entero sin rellenar
   for (int i = 0; i < 10; i++)
   {
        printf("Direccion del puntero[%d] = %p valor del arreglo[%d] = %d\n", i, &puntero[i], i, puntero[i]);
   }

   // Rellenar las direcciones del puntero
   for (int i = 0; i < 10; i++)
   {
        puntero[i] = i * 10;
   }
   printf("\n");

   // Imprimir las direcciones del puntero entero ya rellenado
   for (int i = 0; i < 10; i++)
   {
        printf("Direccion del puntero[%d] = %p valor del arreglo[%d] = %d\n", i, &puntero[i], i, puntero[i]);
   }
   printf("\n");

   //Liberar la memoria dinámica reservada
   free(puntero);

   // Imprimir las direcciones del puntero ya liberado
   for (int i = 0; i < 10; i++)
   {
        printf("Direccion del puntero[%d] = %p valor del arreglo[%d] = %d\n", i, &puntero[i], i, puntero[i]);
   }
   printf("\n");
   
}