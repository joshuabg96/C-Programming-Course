#include <stdio.h>

// Global Variables
int b = 5;                                  // This variable could be used by anyone inside this .c


void print_B()
{
    b = 100;
}


int main() {
    // Local variables
    int a;
    for (int i = 0; i < 16; i++){           // <-- i is only usable in the for cycle
        i += 3;
        a = i;                              // <-- i was assigned to a, now we can use the value outside the for
    }
    printf("The value of i is %i\n", a);
    printf("The value of b is %i\n", b);
    print_B();
    printf("The value of b is %i\n", b);
    
    return 0;
}
