#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int val;
    struct Node* next;
}Node;

typedef struct List
{
    struct Node* Head;
}List;


List CreateList()
{
    List list;
    list.Head = NULL;
    return list;
}

void PrintList(List* list)
{
    if (list->Head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        printf("The elements of the list are:\n");
        Node* current = list->Head;
        while (current != 0)
        {
            printf("%d\n", current->val);
            current = current->next;
        }
    }
}

void AddHead(List* list, int val)
{
    Node* new_node;
    new_node = (Node*)malloc(sizeof(Node));
    new_node->val = val;
    new_node->next = list->Head;
    list->Head = new_node;
}


void AddTail(List* list, int val)
{
    if(list->Head == NULL)
    {
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->val = val;
        new_node->next = NULL;
        list->Head = new_node;
    }
    else
    {
        Node* current = list->Head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        Node* new_node = (Node*)malloc(sizeof(Node));
        new_node->val = val;
        new_node->next = NULL;
        current->next = new_node;
    }
}

void DeleteHead(List* list)
{
    if(list->Head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        Node* new_Head = NULL;
        Node* temp = list->Head;
        new_Head = temp->next;
        free(list->Head);
        list->Head = new_Head;
    }
}

void DeleteTail(List* list)
{
    Node* temp = list->Head;
    if (list->Head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        if(temp->next == NULL)
        {
            list->Head = NULL;
            free(list->Head);
        }
        else
        {
            Node* current = list->Head;
            while (current->next->next != NULL)
            {
                current = current->next;
            }
            current->next = NULL;
            free(current->next);            
        }
    }
}

int HeadVal(List* list)
{
    return list->Head->val;
}

int SearchVal(List* list, int numSearch)
{
    int counter = 0;
    Node* temp = list->Head;

    //Look for the size of the linked list
    while (temp->next != NULL)
    {
        counter++;
        temp = temp->next;
    }
    if(list->Head == NULL)
    {
        printf("linked list is empty\n");
        return 0;
    }
    int flag = 0;
    for (int i = 0; i<counter; i++)
    {
        if(list->Head->val == numSearch)
        {
            flag = 1;
            printf("Value is at index %d\n", counter);
            break;;
        }while (list->Head->val!=numSearch && list->Head->next != NULL)
        {
            counter++;
            list->Head = list->Head->next;
        }
        return flag;
    }
    return 0;
}

void AddVal(List* list, int val, int index)
{
    Node* temp = list->Head;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->val = val;

    new_node->next = temp->next;
    temp->next = new_node;
}

void DeleteVal(List* list, int index)
{
    Node* temp = list->Head;
    Node* node;
    for (int i = 0; i < index - 1; i++)
    {
        temp = temp->next;
    }
    node = temp;
    node = node->next;
    temp->next = node->next;
    node = NULL;
    free(node);
    
}
