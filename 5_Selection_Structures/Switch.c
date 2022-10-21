/*
    Structure:

    switch(variable)
    {
        case n:
            Action
        break;
        .
        .
        .
        case x:
            Action
        break;

        default:
            Action
        break;
    }
*/

#include <stdio.h>


int main()
{
    int day;

    printf("Choose the number of 1 day of the week");
    scanf("%i", &day);                                  // Get the day and save in day variable

    switch (day)                                    // Start the switch with day variable
    {
    case 1:                                         // Case day = 1
        printf("Monday");
    break;
    case 2:
        printf("Tusday");                           // Case day = 2
    break;
    case 3:
        printf("Wensday");                          // Case day = 3
    break;
    case 4:
        printf("Thursday");                         // Case day = 4
    break;
    case 5:
        printf("Friday");                           // Case day = 5
    break;
    case 6:
        printf("Saturday");                         // Case day = 6
    break;
    case 7:
        printf("Sunday");                           // Case day = 7
    break;
    default:                                        
        printf("Incorrect chosen day");             // Case day  != [1,7]
    break;
    }

}