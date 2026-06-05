#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data ;
    struct Node* next ;
};

int main()
{
    struct Node* first = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));

    int num1 , num2;
    scanf("%d" , &num1);
    scanf("%d" , &num2);

    first->data = num1;
    first -> next = second;

    second->data = num2;
    second->next = NULL;

    struct Node* temp = first;
    while(temp != NULL){
        printf("%d\n"  , temp->data);
        temp = temp->next;
    }
    return 0;
}