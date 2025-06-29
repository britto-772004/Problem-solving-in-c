#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node *next;
}Node;

int main(){
    Node *head = NULL;
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node -> data = 12;
    new_node -> next = NULL;
    head = new_node;
    printf("%d , %p",new_node->data,new_node->next);
}