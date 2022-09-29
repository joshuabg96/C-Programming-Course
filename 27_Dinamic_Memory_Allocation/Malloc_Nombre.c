#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nombre[20], *p_nombre; 
    int longitud;
    
    strcpy(nombre, "Josue");
    longitud = strlen(nombre);

    printf("%i\n", longitud);
    p_nombre = malloc((longitud + 1)*sizeof(char));

    strcpy(p_nombre, nombre);
    printf("nombre: %s", p_nombre);
}