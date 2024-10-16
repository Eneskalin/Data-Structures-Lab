#include <stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_srr[MAX];
int top=-1;
void push(int);
int pop();

int main(){
    int data;
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    data=pop();


}
void push(int data){
    if (top==MAX-1)
    {
        printf("Stack overflow");
        return;
    }
    
    top++;
    stack_srr[top]=data;
}
int pop(){
    int value;
    if (top==-1)
    {
        printf("Stack is empty");
        exit(1);
    }
    value=stack_srr[top];
    top--;
    return value;
    
}