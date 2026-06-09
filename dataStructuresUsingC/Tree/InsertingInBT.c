#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* left ;
    struct node* right;
};

struct node* root = NULL ;

void inorder(struct node* rootptr){
    if(rootptr != NULL){
        inorder(rootptr->left);
        printf("%d\t" , rootptr->data);
        inorder(rootptr->right);
    }
}

struct node* getNewNode(int data)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct node* insertNode(struct node* root , int data)
{
    if(root == NULL){
        root = getNewNode(data);
    }
    else if(root->data >= data){
        root->left = insertNode(root->left , data);
    }
    else{
        root->right = insertNode(root->right , data);
    }
    return root;
}



int main(){
   // struct node* root = NULL;
    root = insertNode(root , 10);
    root = insertNode(root , 5);
    root = insertNode(root , 11);
    root = insertNode(root , 100);
    root = insertNode(root , 10);
    root = insertNode(root , 190);
    root = insertNode(root , 156);

    inorder(root);
    return 0;

}