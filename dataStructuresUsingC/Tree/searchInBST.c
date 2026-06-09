// a binary Tree is called Binary search tree when 
// it follows the fundamental rules of binary tree but - considering 
//the node val wrt the root 

// if root-> data > data it lies in the left side 
// if data > root->data it must lie in the right side subtree.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

bool search(struct node* root, int data){
    if(root == NULL) return false ;
    if(root->data == data){
        return true ;
    }
    else if(root->data < data ){
        return search(root->right , data);
    }
    else{
        return search(root->left , data);
    }
    return false;
}