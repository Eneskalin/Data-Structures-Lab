#include <stdio.h>
#include <stdlib.h>

/*Create a menu its have to 
1-push 
2-pop  
3-print the top element 
4-print all elements of the stacks 
5-exit
 functions. */
 
#define STACK_SIZE 5
int arr[STACK_SIZE];
top=-1;
void push(int);
int pop();
void printTop();
void printAll();

void main(){
    push(5);
    push(10);
    push(7);
    //printAll();
    push(70);
    printTop();
    printf("Poped %d",pop());
    printAll();
    return 0;

}

void push(int data){
    if (top == STACK_SIZE-1)
    {
        printf("Stack is full");
        exit(1);
    }
    top++;
    arr[top]=data;
}
int pop(){
    if (top ==-1)
    {
        printf("Stack empty");
        exit(1);
    }
    int value=arr[top];
    top--;
    return value;
}

void printTop(){
    printf("Top element of the stack is %d\n",arr[top]);
}
void printAll(){
    for (int i = top; i > -1; i--)
    {
        printf("\nStack %d\n %d",i,arr[i]);
    }
}





