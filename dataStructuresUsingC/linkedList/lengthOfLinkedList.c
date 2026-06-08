#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};

struct node* head;

int length()
{
    int count = 0 ;
    struct node* temp = head;
    while(temp != NULL){
        count = count + 1;
        temp = temp->next;
    }
    return count;
}


void Insert(int data , int n)
{
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    
    temp->data = data;

    if(n == 1){
        temp->next = head;
        head = temp;
    }
    else {
        struct node* temp2 = head;
        for(int i = 0; i < n-2 ; i++){
            if(temp2 == NULL){
                return;
            }
            temp2 = temp2->next; // temp 2 points to n-1th node 
        }
        temp->next = temp2->next;
        temp2->next = temp;
    }
}

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
    int x = length();
    printf("the count is %d" , x);
}