#include <stdlib.h>
#include <stdio.h>

// Bir kuyruk ile stack icerigini degistiren bir fonksiyon yaziniz

typedef struct swapQueueAndStack
{
    int data;
    struct swapQueueAndStack *next;
    
}node;

typedef struct swapQueueAndStack
{
    int data;
    struct swapQueueAndStack *top;
    struct swapQueueAndStack *next;

}stack;
typedef struct swapQueueAndStack
{
    int cnt;
    struct swapQueueAndStack *front;
    struct swapQueueAndStack *rare;

}queue;

void initialize(queue*);
int isEmpty(queue*);
void push(stack*,int);
int pop(stack*);
void enqueue(queue*,int);
int dequeue(queue*);

void swapQueueAndStack(queue **q,stack **s ){
    queue q1;
    initialize(&q1);
    while (!isEmpty(&q))
        enqueue(&q1,dequeue(&q));
    while (!isEmty(&s))
        enqueue(&q,pop(&s));

    while (!isfull(&q1))
        push(&s,dequeue(&q1));
}

void initialize(queue* q){
    q->cnt=0;
    q->front=NULL;
    q->rare=NULL;
}

isEmpty(queue *q){
    if (q->cnt==0)
    {
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(queue*q,int x){
    node *temp=(node*)malloc(sizeof(node));
    temp->data=x;
    if (isEmpty(q))
    {
        q->front=q->rare=temp;
    }
    else{
        q->rare->next=temp;
        q->rare=temp;
    }
    q->cnt++;
}

