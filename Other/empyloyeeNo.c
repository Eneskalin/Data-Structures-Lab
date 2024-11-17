#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*employeeNo degerine gore kucukten buyuge siralinmis bir cift bagli liste olsun
Verilen isim ve employeeNo degerine sahip dugumu listeye sirasi bozulmayacak sekilde ekleyen fonksiyonu yaziniz */

typedef struct node{
    int employeeNo;
    char name[20];
    struct node *next;
    struct node *prev;
}node;

void employeeNo(node *head,char name[],int employeeNo){
    node *current=head;
    node *newnode=(node*)malloc(sizeof(node));
    newnode->employeeNo=employeeNo;
    newnode->next=NULL;
    newnode->prev=NULL;
    strcpy(newnode->name,name);

    if (head==NULL || employeeNo<=head->employeeNo)
    {
        newnode->next=head;
        if (head!=NULL)
            head->prev=newnode;
        head=newnode;
    }
    
    while (current->next->employeeNo <=newnode->employeeNo)
        current=current->next;

        newnode->next=current->next;
        if (current->next!=NULL)
            current->next->prev=current;
            
        newnode->prev=current;
        current->next=newnode;
    
}
