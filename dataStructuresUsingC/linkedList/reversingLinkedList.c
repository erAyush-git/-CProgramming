#include<stdlib.h>
#include<stdio.h>

struct node 
{
    int data ;
    struct node* next ;
};

struct node* head;

void reverse()
{
    struct node* prev;
    struct node* current;
    struct node* next;

    prev = NULL;
    current = head ;

    while (current != NULL){
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    head = prev;
}