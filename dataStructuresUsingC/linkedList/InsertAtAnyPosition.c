#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head ; 

void Insert(int x , int n)
{
    struct node* newNode = (struct node*)malloc(sizeof(struct node));

    newNode->data = x ;

    //if needed to add at the begainning position
    if(n == 1){             
        
        newNode->next = head ;
        head = newNode;
        return;
    }
    //if n is any random postion we need address of n-1 and n+1 node 
    struct node* temp2 = head;
    for(int i = 0 ; i < n-2 ; i++){
        if(temp2 == NULL){
            return;
        }
        temp2 = temp2->next; 
        //after the complwtion of the loop temp2 points to n-1th node
    }
    newNode->next = temp2->next ; //newnode points to the next node 
    temp2->next = newNode ; //previous node points to new node

    //always connect the new node to the next node and then connect the previous node to the new node.
    //otherwise we will lose the address of the next node and it will be a memory leak.

void print()
{
    struct node* temp = head ;
    while(temp != NULL){
        printf("%d\n" , temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    Insert(2,1);
    Insert(3,2);
    Insert(3,3);
    Insert(4,4);
    Insert(7,5);
    Insert(8,6);
    print();

}