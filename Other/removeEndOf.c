#include <stdio.h>
#include <stdlib.h>

/*Remove N'th node from end of the given list */

typedef struct maxValue
{
    int data;
    struct maxValue *next;
}node;

void removeList(node *head,int n);
node * addNode(node *head,int data);
void display(node*);


void main(){
    node *head=NULL;
    head =addNode(head,5);
    head =addNode(head,2);
    head =addNode(head,78);
    head =addNode(head,91);
    head =addNode(head,55);
    head =addNode(head,24);
    head =addNode(head,8);
    head =addNode(head,77);
    head =addNode(head,0);
    head =addNode(head,2);
    head =addNode(head,8);
    head =addNode(head,21);
    display(head);
    printf("\n\n");
    removeList(head,5);
    printf("\n\n");
    display(head);

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
void display(node*head){
    node*temp=head;
    while (temp !=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    
}


void removeList(node *head,int x){
    int counter=0;
    node *temp=head;
    while (temp!=NULL)
    {
        counter++;
        temp=temp->next;
    }
    int target=counter-x;
    temp=head;
    if (target == 0)
    {
        node *toDelete=head;
        head=head->next;
        free(toDelete);
        return;
    }
    for (int i = 0; i < target; i++)
    {
        temp=temp->next;
    }
     node *toDelete = temp->next;
    temp->next = temp->next->next;
    free(toDelete);
}