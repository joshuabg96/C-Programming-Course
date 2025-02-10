#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node* left;
    struct Node* righ;
}Node;

Node* CreateNode(int data);
Node* InsertNode(Node* root, int data);
Node* DeteleNode(Node* root, int data);
Node* SearchNode(Node* root, int data);
Node* FindMinNode(Node* root);
Node* FindMaxNode(Node* root);
void PrintTree(Node* root, int space);