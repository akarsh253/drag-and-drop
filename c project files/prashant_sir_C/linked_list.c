#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node*next;
}Node;
Node*createNode(int data)
{
    Node*newNode = (Node*)malloc(sizeof(Node));
    if(!newNode){
        printf("Memorey error\n");
        exit(1);

    }
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}


