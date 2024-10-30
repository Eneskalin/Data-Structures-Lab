#include <stdlib.h>
#include <stdio.h>

#define LEN 10

typedef struct{
    int data[LEN];
    int front;
    int rear;
    int cnt;
}queue;
void initiatize(queue *q);

void main(){
    

}

void initiatize(queue *q){
    q->cnt=0;
    q->front=0;
    q->rear=-1;
}

void equeue(queue *q,int x){
    if (isFull(q)==1)
    {
        printf("Queque is full");
    }
    else{
        q->cnt++;
        q->rear++;
        if (q->rear == LEN)
        {
            q->rear=0;
        }
        q->data[q->rear]=x;
        
    }
}

int Dequeue(queue *q){
    if (isEmpty(q)==1)
    {
        printf("Queue is empty");
        return -100;
    }
    else{
        int x=q->data[q->front];
        q->front++;
        q->cnt--;
        if (q->front == LEN)
        {
            q->front=0;
        }
        return x;
    }
        
    
}