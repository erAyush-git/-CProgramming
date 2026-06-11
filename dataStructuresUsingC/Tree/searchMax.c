#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* left ;
    struct node* right;
};

struct node* root = NULL;

int searchmax(struct node* rootptr){
    struct node* current = rootptr;
    if(current == NULL) return -1;
    while(current->right != NULL){
        current = current->right;
    }
    return current->data;
}