#include <stdio.h>
#include <stdlib.h>

//Write a function that returns the number of nodes in a DLL.
//Bir DLL'deki düğüm sayısını döndüren bir fonksiyon yazın.

typedef struct node
{
    int value;
    struct node *next;
    struct node *prev;
}node;

void main(){
    node *head=(node *)malloc(sizeof(node));
    node *first=(node *)malloc(sizeof(node));
    node *second=(node *)malloc(sizeof(node));
    node *third=(node *)malloc(sizeof(node));

    head->prev=NULL;
    head->next=first;
    first->prev=head;
    second->prev=first;
    third->prev=second;
    first->next=second;
    second->next=third;
    third->next=NULL;
    printf("%d",numberOfnodes(head));

    
}

int numberOfnodes(node *head){
    int counter=0;
    node *temp=head;
    while (temp != NULL)
    {
        counter++;
        temp=temp->next;
    }
    return counter;
}
