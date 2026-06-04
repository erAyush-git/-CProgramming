#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node* link;
}; 

int main(){
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* sec = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    first->data = 10;
    first->link = sec;

    sec->data = 20;
    sec->link = third;

    third->data = 40;
    third->link = NULL;

    //traversing the list 
    struct Node* temp = first;
    while (temp != NULL){
        printf("%d\n", temp->data);
        temp = temp->link;
    }
    return 0;

}