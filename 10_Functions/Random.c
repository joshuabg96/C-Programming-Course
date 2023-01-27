/*
    srand(time(NULL)) <-- Return a random value
    variable = lower_limit + rand()%((upper_limit + 1) - lower_limit)
*/

#include <stdio.h>
#include <time.h>

int main()
{
    int num;
    srand(time(NULL));
    num = 1 + rand()%((10+1)-1);
    printf("%d", num);
}