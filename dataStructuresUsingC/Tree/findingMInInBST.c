// finding minimum value in a binary serch tree 

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data ;
    struct node* left ;
    struct node* right ;
};

struct node* root = NULL;

int searchMin(struct node* rooot){
    struct node* current = rooot;
    if(current == NULL){
        return -1;
    }
    else{
        while(current != NULL){
            current = current->left;

        }
        return current->data;
    }
    return current->data;
}