#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data ;
    struct node* next;
};

struct node* head;

void delete(int position)
{
    struct node* temp1 = head;
    if(position == 1){
        head = temp1->next;
        free(temp1);
    }
    for(int i = 0 ; i < position-2 ; i++){
        temp1 = temp1->next;
    }
    struct node* temp2 = temp1->next; //points to nth node.
    
    //connect n-1th node to n+1th node 
    temp1->next = temp2->next;
    free(temp2);
}

void print()
{

}