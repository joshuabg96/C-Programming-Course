/*
    Function strcmp compare two strings and return the following value
    String1 == String2 return 0
    String1 > String2 return n > 0
    String1 < String2 return n < 0

    it is located in string.h library

    strcmp(String1, String2);
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char Password[] = "Password";
    char input[100];
    printf("Introduce the password\n");
    scanf("%s", &input);

    if (strcmp(Password, input) == 0)
    {
        printf("welcome to the system");
    }
    else
    {
        printf("Incorrect Password");
    }
    
    
}