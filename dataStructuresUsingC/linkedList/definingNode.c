#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct node* next;
};

// in this piece of code the struct node* is nothing 
//but a pointer to the next node. 

//(struct node*) is the methord to define the pointer of the node.