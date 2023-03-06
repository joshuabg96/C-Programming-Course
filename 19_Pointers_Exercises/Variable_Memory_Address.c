/*
    Create a int, float and char variables
    store data in every variable and indicate the memory address of every variable
*/
#include <stdio.h>

int main() {

    int n = 10,*p_n = &n;
    float n2 = 10.5, *p_n2 = &n2;
    char n3 = 'a', *p_n3 = &n3;

    printf("integer variable: \n");
    printf("Data: %i ",*p_n);
    printf("Address: %p ",p_n);

    printf("\n\nFloat Varible\n");
    printf("Data: %.2f ",*p_n2);
    printf("Address: %p ",p_n2);

    printf("\n\nChar Variable\n");
    printf("Data: %c ",*p_n3);
    printf("Address: %p ",p_n3);
}