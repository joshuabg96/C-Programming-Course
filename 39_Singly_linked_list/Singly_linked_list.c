#include <stdio.h>
#include <stdlib.h>

// Creation of the minimum basic structure of the Linked List
typedef struct tNode
{
    int value;
    struct tNode* next;
}Node;

// Create a Linked list based on Nodes
typedef struct tlist
{
    int size;
    Node* Head;
    Node* Tail;
}LinkedList;

// Create a new Node with a Value
Node* getNode(int value)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->value =  value;
    node->next = NULL;
    return node;
}

LinkedList* getLinkedList()
{
    LinkedList* LL = (LinkedList*)malloc(sizeof(LinkedList));
    LL->size = 0;
    LL->Head = NULL;
    LL->Tail = NULL;
}

// CRUD Operations

// ADD
void Add(LinkedList* ll, Node* node)
{
    if (ll->Head == NULL)
    {
        ll->Head = node;
    }
    else
    {
        ll->Tail->next = node;
    }
    ll->Tail = node;
    ll->size++;   
}

//Read
Node* Read (LinkedList* ll, int index)
{
    if (ll->size && index < ll->size)
    {
        Node* ListExplorer = ll->Head;
        int i = 0;
        while (i++ < index)
        {
            ListExplorer = ListExplorer->next;
        }
        return ListExplorer;
    }   
}

//Update
void Update (LinkedList* ll, unsigned int index, int NewValue)
{
    if (ll->size && index < ll->size)
    {
        Node* ListExplorer = ll->Head;
        int i = 0;
        while (i++ < index)
        {
            ListExplorer = ListExplorer->next;
        }
        ListExplorer->value = NewValue;
    }   
}

//Delete
void Delete(LinkedList* ll, int index)
{
    if (ll->size && index < ll->size)
    {
        Node* aux;
        if (index == 0)
        {
            aux = ll->Head;
            ll->Head = ll->Head->next;
            free(aux);
        }
        else
        {
            Node* ListExplorer = ll->Head;
            int i = 0;
            while (i++ < index - 1)
            {
                ListExplorer = ListExplorer->next;
            }            
            aux = ListExplorer->next;
            if (index == ll->size-1)
            {
                ListExplorer->next = NULL;
                ll->Tail = ListExplorer;
            }
            else
            {
                ListExplorer->next = ListExplorer->next->next;
            }
            free(aux);
            ll->size--;
        }
    }    
}

int main()
{
    LinkedList* LIST = getLinkedList();
    Node* a = getNode(1);
    Node* b = getNode(2);
    Node* c = getNode(3);
    Node* d = getNode(4);

    Add(LIST, a);
    Add(LIST, b);
    Add(LIST, c);
    Add(LIST, d);

    printf("%d\n", Read(LIST, 0)->value);

    Update(LIST, 0, 10);

    printf("%d\n", Read(LIST, 0)->value);

    Delete(LIST, 0);

    printf("%d", Read(LIST, 0)->value);

    free(LIST);
    return 0;
}