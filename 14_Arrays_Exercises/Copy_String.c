/*
    Copy a string array to another array using string.h library
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char name1[15],name2[15];
    printf("Write Your name\n");
    gets(name1); 

    strcpy(name2,name1);
    printf("Your Name is: %s",name2);
}