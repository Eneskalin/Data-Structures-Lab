#include <stdlib.h>
#include <stdio.h>

/*Merge two sorted Linked List.Given two sorted linked  lists  merge them into one sorted list  and return the head
 of the new list*/

typedef struct mergeList
{
    int data;
    struct mergeList *next;
}node;
node *head1;
node *head2;
node * addNode(node *head,int data);
void display(node *);

void mergeList(node *head1,node *head2);
 void main(){
    node *head1=NULL;
    head1 =addNode(head1,5);
    head1 =addNode(head1,2);
    head1 =addNode(head1,78);
    head1 =addNode(head1,91);


    node *head2=NULL;
    head2 =addNode(head2,10);
    head2 =addNode(head2,12);
    head2 =addNode(head2,88);
    head2 =addNode(head2,1);
    mergeList(head1,head2);
    display(head1);


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

void mergeList(node *head1,node *head2){
    node *temp=head1;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2;
    
}

void display(node *head){
    node *temp=head;
    while (temp->next != NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    
}