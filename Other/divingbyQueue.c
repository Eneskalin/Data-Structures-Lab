#include <stdio.h>
#include <stdlib.h>

/*6)Fonksiyona parametre olarak gelen sayının tam bölenlerini tanımlanan “q”
kuyruğuna sırasıyla ekleyen fonksiyonu yazınız.*/

typedef struct divingbyQueue
{
    int cnt;
    node *front;
    node *rear;
}queue;

typedef struct 
{
    int data;
    node *next;
    
}node;




void divider(int x,queue *q){

    for (int i = 1; i <= x; i++)
    {
        if (x%i ==0)
        {
            node *temp=(node*)malloc(sizeof(node));
            temp->data=x;
            if (q->cnt ==0)
            {
                q->front=q->rear=temp;
            }
            else{
                q->rear->next=temp;
                q->rear=temp;

            }
                q->cnt++;            
        }
        
    }
    

}