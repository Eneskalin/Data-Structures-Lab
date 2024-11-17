#include <stdio.h>
#include <stdlib.h>

/*WRITE A PROGRAM TO REVERSE THE ELEMENTS OF THE STACK USING TWO STACk.*/

 struct node
{
    int data;
    struct node *link;
}*top=NULL;

int main(){
    push(1);
    push(2);
    push(3);
}

void push(int data){
    struct node* newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        exit(1);
    }
    newnode->data=data;
    newnode->link=NULL;

    newnode->link=top;
    top=newnode;
    

}




