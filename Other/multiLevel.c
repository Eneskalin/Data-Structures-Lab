#include <stdio.h>
#include <stdlib.h>

/*Flatter a Multilevel Singly L.L You are give a  single  L.L.  where  each  element  contains  a child pointer 
that  may or may not point  to  a seperated   single L.L  Flatter   the list so that  all nodes appear in a a 
single Level singly  Linked List  */

typedef struct multiLevel
{
    int data;
    struct multilevel *next;
    struct multilevel *child;
    
}node;
void converSingle(node*);

void main(){
    node * head= (node*)malloc(sizeof(node));
    
}

void converSingle(node *head){
    node*temp=head;
    
    

    while (temp !=NULL)
    {
        if (temp->child !=NULL)
        {
            node* current=temp->child;
            while (current->next !=NULL)
            {
                current=current->next;
            }
            current->next= temp->next;
        }
        temp=temp->next;
        temp->next = temp->child;
        temp->child=NULL;
        
    }
    

}
