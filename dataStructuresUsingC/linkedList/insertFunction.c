#include <stdlib.h>
#include <stdio.h>

struct node
{
    int data;
    struct node* next;
};

struct node* head; //declared as global var so it can be accessed anywhere.

void Insert(int x) //by default adds to first position
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    //temp->next = NULL;
    //head = temp;
    //if(head != NULL){
    //temp->next = head;
    //}
    temp->next = head;
    head = temp;
}
void print(){
    //basic traversal program for linked list
    struct node* temp = head; //used a temp variable here beacuase dont want to modify head variable.
    while(temp != NULL){
        printf("%d\t" , temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    head = NULL;
    printf("how many numbers to add :");
    int n , data , i;
    scanf("%d" , &n);
    for(i=0;i<n;i++){
        scanf("%d" , &data);
        Insert(data);
        print();
    }
    return 0;
}