#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node 
{
    int data;
    struct node* left ;
    struct node* right;
};

struct node* root = NULL ;

int searchMin(struct node* rooot){
    struct node* current = rooot;
    if(current == NULL) return -1;
    while(current->left != NULL){
        current = current->left;

    }
    return current->data;
}

int searchmax(struct node* rootptr){
    struct node* current = rootptr;
    if(current == NULL) return -1;
    while(current->right != NULL){
        current = current->right;
    }
    return current->data;
}

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

    //bool res = search(root , 1 , 6);
    //if(res == true) printf("found");
    //else printf("not found");

    int x = searchmax(root);
    printf("\n%d" , x);
    return 0;

}