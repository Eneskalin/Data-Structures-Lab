#include <stdio.h>
#include <stdlib.h>

//Rekürsif olarak bir bağlı listeyi tersten yazan fonksiyon.

typedef struct recurisiveReserve{
    int data;
    struct recurisiveReverse *next;
}node;

void reverse(node *head){
    node *temp=head;
    if (temp == NULL)
    {
        
        return;
    }
    else{
        reverse(temp->next);
    }
    printf("%d",temp->data);

    
} 