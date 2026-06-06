#include <stdlib.h>
#include <stdio.h>

struct node 
{
    int data ;
    struct node* next;
};

int main()
{
    //defining a head node and setting it empty 
    struct node* head = NULL ;
    
    //setting up a new node 
    struct node* newNode;
    newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = 10;
    //link new node to old head
    newNode->next = head;
    //move head to new node 
    head = newNode;

    struct node* temp = head;
    while(temp != NULL){
        printf("%d\n" , temp->data);
        temp = temp->next;

    }
    return 0;
}