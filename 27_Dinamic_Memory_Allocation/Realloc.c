#include <stdio.h>

int main()
{
    int *vector, *vector_convertido;
    vector = malloc(3*sizeof(int));

    vector[0] = 1;
    vector[1] = 2;
    vector[2] = 3;

    for (int i = 0; i < 3; i++)
    {
        printf("%i ", vector[i]);
    }
    
    //vector_convertido = realloc(vector, 5*sizeof(int));
    realloc(vector, 5*sizeof(int));

    vector[3] = 4;
    vector[4] = 5;

    printf("\n\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%i ", vector[i]);
    }
    
}