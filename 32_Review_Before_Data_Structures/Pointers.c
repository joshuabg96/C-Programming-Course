#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Data Variable
    int a = 10;

    //Address Variable
    int *p;
    int *array;

    p = &a;             //<-- Pointer p is equal to the Address of variable a

    printf("%d\n", a);      // print the value of a
    printf("%d\n", *p);       // print the value of the address saved in p
    printf("%p\n", p);            // Print the Address saved in p

    // The pointers are used to save the address, so if we want to request a specific
    // size of dinamic memory, we can use the pointer to save the address where the 
    // requested dinamic memory starts

    array = (int *)malloc(5*sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        array[i] = i;
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", array[i]);
    }  

    free(array);        // <-- Remember to free the dynamic memory
}