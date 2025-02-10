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
    int size;
}List;

List CreateCircularList()
{
    List list;
    list.Head = NULL;
    list.size = 0;
    return list;
}

void Print_CircularList(List* list)
{
    if(list->Head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        int size = list->size;
        printf("The elements of the list are:\n");
        Node* current = list->Head;
        while (size > 0)
        {
            printf("%d\n", current->val);
            current = current->next;
            size--;
        }
    }
}

void AddTail_CircularList(List* list, int value)
{
    int position = list->size;
    if(list->Head == NULL)
    {
        Node* node = (Node*)malloc(sizeof(Node));
        node->val = value;
        node->next = node;
        list->Head = node;
    }
    else
    {
        Node* current = list->Head;
        while (position!=1)
        {
            current = current->next;
            position--;
        }
        Node* newNode;
        newNode = (Node*)malloc(sizeof(Node));
        current->next = newNode;
        newNode->val = value;
        newNode->next = list->Head;
    }
    list->size++;
}

void AddHead_CircularList(List* list, int value)
{
    Node* node;
    Node* temp;
    node = (Node*)malloc(sizeof(Node));
    temp = (Node*)malloc(sizeof(Node));
    node->val = value;
    if (list->Head == NULL)
    {
        node->next = node;
    }
    else
    {
        node->next = list->Head;
        temp = list->Head;
        while (temp->next != list->Head)
        {
            temp = temp->next;
        }
        temp->next = node;        
    }
    list->Head = node;
    list->size++;    
}

void DeleteHead_CircularList (List* list)
{
    if(list->Head == NULL)
    {
        printf("List is empty\n");
    }
    else
    {
        Node* newHead = NULL;
        Node* temp = list->Head;
        newHead = temp->next;
        free(list->Head);
        list->Head = newHead;
        list->size--;
    }
}

void DeleteTail_CircularList (List* list)
{
    Node* temp = list->Head;
    int position = list->size;
    if(list->Head == NULL)
    {
        printf("The list is empty\n");
    }
    else
    {
        if (temp->next == list->Head)
        {
            temp->next = NULL;
            free(temp->next);
            list->size--;
        }
        else
        {
            Node* current = list->Head;
            while (position != 1)
            {
                current = current->next;
                position--;
            }
            current->next = NULL;         
            free(current->next)   ;
            current->next = list->Head;
            list->size--;
        }
    }
}

int Search_CircularList(List* list, int search_num)
{
    if(list->Head == NULL)
    {
        printf("List is empty\n");
        return 0;
    }
    int count = 0, flag = 0, control = 0;
    for (int i = 0; i < list->size; i++)
    {
        if(list->Head->val == search_num)
        {
            flag = 1;
            printf("The number is at %d index\n", count);
            break;
        }while (list->Head->val!= search_num && control < list->size)
        {
            control++;
            count++;
            list->Head = list->Head->next;
        }
        
    }
    return flag;
}

void AddValue_CircularList(List* list, int val, int index)
{
    Node* temp = list->Head;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    Node* newVal;
    newVal = (Node*)malloc(sizeof(Node));
    newVal->val = val;
    newVal->next = temp->next;
    temp->next = newVal;
}

void DeleteValue_CircularList(List* list, int index)
{
    Node* temp = list->Head;
    Node* node;
    for (int i = 0; i < index-1; i++)
    {
        temp = temp->next;
    }
    node = temp;
    node = node->next;
    temp->next = node->next;
    node = NULL;
    free(node);    
}