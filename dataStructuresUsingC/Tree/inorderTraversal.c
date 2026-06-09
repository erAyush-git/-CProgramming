#include<stdio.h>
#include<stdlib.h>

struct node {
    int data ;
    struct node* left;
    struct node* right;
};

struct node* root = NULL;

void inorder(struct node* rootPtr){
    if(root != NULL){
        inorder(root->left);
        printf("%d" , root->data);
        inorder(root->right);
    }
    else {
        printf("Empty tree.");
    }
}

// this is inorder traversal methord for the binary search tree.
//Inorder travsveral gives the elements of tree in sorted array
//sorted in asc order.