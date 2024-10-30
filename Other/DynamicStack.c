#include <stdio.h>
#include <stdlib.h>

typedef struct DynamicStack
{
    int data;
    struct DynamicStack *next;
}node;

node *temp=NULL;
node *top=NULL;

void push(int data){
    node *newnode=(node *)malloc(sizeof(node));
        newnode->data=data;
        newnode->next=top;
        top=newnode;
    

}

void pop(){
    if (top == NULL)
    {
        printf("Stack is empty!!!");
        return;
    }
    else{
        temp=top->next;
        printf("Poped %d\n",top->data);
        free(top);
        top=temp;
    }
    
}

void display(){
    node *current=top;
    while (current !=NULL)
    {
        printf("\n%d\n",current->data);
        current=current->next;
    }
    printf("\n\n");

    
    
}


void main(){
    push(5);
    push(10);
    push(15);
    push(20);
    display();
    push(25);
    push(30);
    display();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    display();



}



