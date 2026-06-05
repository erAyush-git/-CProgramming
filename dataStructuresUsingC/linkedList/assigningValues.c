#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node* next;
};

int main()
{
    //dynamic memory allocation for the nodes 
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    
    //assigining values.
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    //for traversal of the list 
    struct Node* temp = first;
    while(temp != NULL){
        printf("%d\n" , temp->data);
        temp = temp->next;
    }
    return 0;


}