#include "Tree.h"

Node* CreateNode(int data)
{
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL)
    {
        printf("Error creating new node");
        exit(0);
    }
    newNode->data = data;
    newNode->left = NULL;
    newNode->righ = NULL;

    return newNode;    
}

Node* InsertNode(Node* root, int data)
{
    if (root == NULL)
    {
        return CreateNode(data);
    }
    if (data < root->data)
    {
        root->left = InsertNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->righ = InsertNode(root->righ, data);
    }
    return root;
}

Node* FindMinNode(Node* root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }return root;   
}

Node* FindMaxNode(Node* root)
{
    while (root->righ != NULL)
    {
        root = root->righ;
    }return root;
}

Node* SearchNode(Node* root, int data)
{
    if (root == NULL || root->data == data)
    {
        return root;
    }
    if (root->data < data)
    {
        return SearchNode(root->righ, data);
    }
    return SearchNode(root->left, data);
}

void PrintTree(Node* root, int space)
{
    if (root == NULL)
    {
        return;
    }
    space += 10;
    PrintTree(root->righ, space);
    printf("\n");
    for (int i = 10; i < space; i++)
    {
        printf(" ");
    }
    printf("%d\n", root->data);
    
    PrintTree(root->left, space);
}

Node* DeteleNode(Node* root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (data < root->data)
    {
        root->left = DeteleNode(root->left, data);
    }
    else if (data > root->data)
    {
        root->righ = DeteleNode(root->righ, data);
    }
    else            
    {
        //Case 1: No child
        if (root->left == NULL && root->righ == NULL)
        {
            free(root);
            return NULL;
        }
        //Case 2: 1 Child (Right)
        else if (root->left == NULL)
        {
            Node* temp = root->righ;
            free(root);
            return temp;
        }
        // Case 3: 1 Child (Left)
        else if (root->righ == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 3: 2 Child
        else
        {
            Node* temp = FindMinNode(root->righ);
            root->data = temp->data;
            root->righ = DeteleNode(root->righ, temp->data);
        }
    }
    return root;
}