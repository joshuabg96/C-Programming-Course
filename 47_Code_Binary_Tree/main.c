#include <stdio.h>
#include "Tree.c"

 int main()
 {
    Node* root = NULL;

    root = InsertNode(root, 10);
    root = InsertNode(root, 5);
    root = InsertNode(root, 20);
    root = InsertNode(root, 3);
    root = InsertNode(root, 6);
    root = InsertNode(root, 19);
    root = InsertNode(root, 23);
    root = InsertNode(root, 7);
    root = InsertNode(root, 2);

    PrintTree(root, 0);

    int Number = 10;
    Node* searchResult = SearchNode(root, Number);
    if (searchResult != NULL)
    {
        printf("Found %d\n", Number);
    }
    else
    {
        printf("Not found %d\n", Number);
    }
    
    root = DeteleNode(root, Number);

    searchResult = SearchNode(root, Number);

    if (searchResult != NULL)
    {
        printf("Found %d\n", Number);
    }
    else
    {
        printf("Not found %d\n", Number);
    }

    PrintTree(root, 0);
 }