#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int main()
{
    struct node* first = (struct node*)malloc(sizeof(struct node));
    struct node* sec = (struct node*)malloc(sizeof(struct node));

    first->data = 10;
    first->next = sec ;

    sec->data = 20;
    sec->next = first;

    //traversal in the list.
    struct node* temp = first;
    while(temp != NULL){
        printf("%d\n" , temp->data);
        temp = temp->next;
    }
    return 0;
}