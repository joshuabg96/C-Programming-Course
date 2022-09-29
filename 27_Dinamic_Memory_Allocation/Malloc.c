#include <stdio.h>

int main()
{
    int *a;
    float *b;
    a = malloc(sizeof(int));
    b = malloc(sizeof(float));

    *a = 5;
    *b = 5.1;

    printf("%i\n", *a);
    printf("%.2f", *b);
}