#include <stdio.h>

int main()
{
    int *p1;
    p1 = malloc(sizeof(int));
    *p1 = 15;
    printf("%i\n", *p1);
    free(p1); //<-- Se libera la región de memoria que se reserví anteriormente
    printf("%i\n", *p1);
}