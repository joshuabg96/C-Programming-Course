#include <stdio.h>

struct Rectangle
{
    int Length;
    int Breadth;
};

void inicialize(struct Rectangle *r, int l, int b)
{
    r->Breadth = b;
    (*r).Length = l;
}

int area(struct Rectangle r1)
{
    return r1.Breadth * r1.Length;
}

void changeLength(struct Rectangle *p, int l)
{
    p->Length = l;
}

int main()
{
    struct Rectangle r;
    inicialize(&r, 10, 5);
    printf("Length: %d\n",r.Length);
    printf("area: %d\n", area(r));
    changeLength(&r, 20);
    printf("Length: %d\n",r.Length);
    printf("area: %d\n", area(r));

}