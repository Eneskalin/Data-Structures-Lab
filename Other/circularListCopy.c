#include <stdlib.h>
#include <stdio.h>

/* concatenate fonksiyonu tek bağlı dairesel listelerde iki listeyi verilen ilk listenin sonuna ekleyerek birleştiren
 fonksiyon olarak tanımlanacaktır.

 void concatenate(struct node*& list_1, struct node* list_2)
*/

typedef struct node
{
    int data;
    node *next;

}node;
node *head;


void concatenate(struct node* list_1, struct node* list_2){
    node *temp=list_1;
   if (list_1 == NULL)
        list_1=list_2;
    
    else{


        while (temp->next !=list_1)
        {
            temp=temp->next;
        }
        temp->next=list_2;
        temp=list_2;
        while (temp->next != list_2 )
        {
            temp=temp->next;
        }
        temp->next=list_1;
        
        
    }
   

}

