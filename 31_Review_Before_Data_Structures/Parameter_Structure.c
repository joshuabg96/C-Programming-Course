#include <stdio.h>

struct Rectangle
{
    int length;
    int breadth;
};

int area(struct Rectangle r1)   //<-- Structures parameters are by value
{
    return r1.breadth * r1.length;
}

void changeLength(struct Rectangle *p, int l)
{
    p->length = l;
}

int main()
{
    struct Rectangle r = {.length = 10, .breadth = 5};
    printf("Rectangle area = %d\n", area(r));
    changeLength(&r, 5);
    printf("Rectangle area = %d\n", area(r));
}