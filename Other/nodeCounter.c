#include <stdlib.h>
#include <stdio.h>

/*Çift bağlı doğrusal bir listede, fonksiyona parametre olarak gelen listenin düğüm sayısını 
bulan ve düğüm sayısı tek ise listenin ortanca düğümünü silen, düğüm sayısı çift ise düğüm sayısını 
ekrana yazdıran fonksiyonu yazınız?*/

typedef struct nodeCounter
{
    int data;
    struct nodeCounter *next;
}node;

void nodeBehaviour(node *head);
node * addNode(node *head,int key){
    node *temp=(node*)malloc(sizeof(node));
    temp->data=key;
    temp->next=NULL;

    if (head==NULL)
    {
        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }
   
    return head;

}
void print(node *head){
    node *current=head;
    while (current !=NULL)
    {
        printf("%d->",current->data);
        current=current->next;

    }
    
    

}

void main(){
    node *head=NULL;
    
   head= addNode(head,5);
   head= addNode(head,6);
   head= addNode(head,15);
   head= addNode(head,7);
   head= addNode(head,8);
   print(head);
   nodeBehaviour(head);
   printf("\n");
   
  
}

void nodeBehaviour(node *head){
    int counter=0;
    node *current=head;
    while (current !=NULL)
    {
        current=current->next;
        counter++;
    }
    if (counter%2==0)
    {
        printf("\nCounter:%d",counter);
    }
    else{
        current=head;
        for (int i = 0; i < counter/2; i++)
        {
            current=current->next;
        }
        current->next=current->next->next;
        free(current->next);

        
        
    }
    
}


