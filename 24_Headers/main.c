/*
    One method to keep your code organized and create more portability is creating
    Headers, the headers can be used as librarys where you can add functions
    variables, classes, subrutines, etc.
    You have to added with #include "HeaderName.h"
*/

#include "Adittion.h"
#include "Subtraction.h"
#include <stdio.h>

int main()
{
    int *v1, *v2, a = 1, b = 2;
    int Answer;
    v1 = &a;
    v2 = &b;

    Answer = Add(v1, v2);
    printf("Answer = %i\n", Answer);
    Answer = sub(v1,v2);
    printf("Answer = %i", Answer);
}