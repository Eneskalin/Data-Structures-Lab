#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Write a function that returns the max value of a given single linked list

typedef struct maxValue
{
    int data;
    struct maxValue *next;
}node;

node * addNode(node *head,int data);
void findMax(node *);

void main(){
    node *head=NULL;
    head =addNode(head,5);
    head =addNode(head,2);
    head =addNode(head,78);
    head =addNode(head,91);
    findMax(head);

    
}

node* addNode(node *head,int data){
    node *temp= (node*) malloc(sizeof(node));
    
    if (head == NULL)
    {
        temp->data=data;
        temp->next=NULL;
        head=temp;
        return head;
    }
    else{
        temp->data=data;
        temp->next=head;
        head=temp;
        return head;
    }
    

}

void findMax(node *head){
    node *current=(node *)malloc(sizeof(node));
    node *maxValue=(node *)malloc(sizeof(node));
    current=head;
    maxValue->data=head->data;
    while (current != NULL)
    {
        if (current->data>maxValue->data)
        {
            maxValue->data=current->data;
        }
        current=current->next;
        
    }
    printf("Max value is :%d",maxValue->data);
    
}
