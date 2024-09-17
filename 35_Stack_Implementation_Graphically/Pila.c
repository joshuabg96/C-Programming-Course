#include <Pila.h>

int main()
{
    Pila MyPila = createPila();

    Push(&MyPila, 10); 

    printf("The value of the tope is %d\n", MyPila.tope);
    printf("Last value of the Pila is: %d\n",MyPila.lista[MyPila.tope - 1]);}

    Push(&MyPila, 12);
    Push(&MyPila, 13);
    Push(&MyPila, 14);

    printf("The value of the tope is %d\n", MyPila.tope);
    printf("Last value of the Pila is %d\n", tope(MyPila));

    int temp = pop(&MyPila);
    printf("Value deleted %d\n", temp);
}