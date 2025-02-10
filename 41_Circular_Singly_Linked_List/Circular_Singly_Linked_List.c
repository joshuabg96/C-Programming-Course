#include "Circular_Singly_Linked_List.h"

int main()
{
    int value, flag = 10, index;

    printf("This program uses linked list to evaluate operations \n");

    List NewList = CreateCircularList();        // Creation of a new list

    printf("New List Created\n");

    while (flag != 0)
    {
        printf("Choose one of the following operations\n");
        printf("1) Add at Head\n2) Add at Tail\n3) Delete at Head\n4) Delete at Tail\n");
        printf("5) Print List\n6)Search an element of the list\n7) Add a value\n8) Delete a value\n9)Exit\n");
        fflush(stdin);
        scanf("%d", &flag);
        switch (flag)
        {
        case 1:
            printf("What Value do you want to add at Head\n");
            fflush(stdin);
            scanf("%d", &value);
            AddHead_CircularList(&NewList, value);
            break;

        case 2:
            printf("What Value do you want to add at Tail\n");
            fflush(stdin);
            scanf("%d", &value);
            AddTail_CircularList(&NewList, value);
            break;
        
        case 3:
            printf("The Head is deleted\n");
            DeleteHead_CircularList(&NewList);
            break;

        case 4:
            printf("The Tail is deleted\n");
            DeleteTail_CircularList(&NewList);
            break;

        case 5:
            printf("All the values of the list are the following\n");
            Print_CircularList(&NewList);
            break;

        case 6:
            printf("What is the value that you want to search?\n");
            fflush(stdin);
            scanf("%d", &value);
            Search_CircularList(&NewList, value);
            break;

        case 7:
            printf("What value do you want to add?\n");
            fflush(stdin);
            scanf("%d", &value);
            printf("What index do you want to change?\n");
            fflush(stdin);
            scanf("%d", &index);
            AddValue_CircularList(&NewList,value,index);
            break;

        case 8:
            printf("What Value do you want to delete?\n");
            fflush(stdin);
            scanf("%d", &value);
            DeleteValue_CircularList(&NewList, value);
            break;
        case 9:
            flag = 0;
            break;

        default:
            printf("Select a correct option\n\n");
            break;
        }
 
    }
}