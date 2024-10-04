#include <stdio.h>
#include <stdlib.h>

/*
In th&s lab, you w&ll create a s&ngly l&nked l&st and perform the follow&ng operat&ons:
1. Add a new node to the head of the l&st.
2. Add a new node to the ta&l of the l&st.
3. F&nd the total number of nodes &n the l&st.
4. Pr&nt all the elements &n the l&st.

struct node {
 int data;
 struct node *next;
 };

 struct node *addhead(struct node *head,int key)
struct node *addlast(struct node *head,int key)
int count(struct node *head)
void print(struct node *head)
*/

typedef struct node
{
    int data;
    struct node *next;
}node;


struct node *addhead(struct node *head,int key);
struct node *addlast(struct node *head,int key);
int count(struct node *head);
void printList(struct node *head);

void main(){
    node *head=(node*)malloc(sizeof(node));
    head=NULL;
    int select;
    int key;
    while (select !=0)
    {
        printf("\n1-Add Head \n 2-Add Last \n 3-Count datas of the list \n 4-Print List \n 0-Exit\n");
        scanf("%d",&select);
        switch (select)
        {
        case 1:
            
            printf("Enter Value:");
            scanf("%d",&key);
            head =addhead(head,key);
            break;
        case 2:
            printf("Enter Value:");
            scanf("%d",&key);
            head=addlast(head,key);
            break;
        case 3:
            int result;
             result=count(head);
             printf("%d",result);
            break;
        case 4:
            printList(head);
            break;
        default:
        printf("Invalid value");
            break;
        }
    }
    

}

struct node *addhead(struct node *head,int key){
    node *current;
    current= (node *)malloc(sizeof(node));
    if (head == NULL)
    {
        current->data=key;
        head = current;
        current->next=NULL;
    }
    else{
        current->data=key;
        current->next=head;
        head=current;
    }
    return head;
    
}

struct node  *addlast(struct node *head,int key){
    node *current=head;
    node *last= (node *)malloc(sizeof(node));
    current= (node *)malloc(sizeof(node));

    if (head == NULL)
    {
        current->data=key;
        head=current;
        current->next=NULL;
    }
    else{
        while (current != NULL)
        {
            current=current->next;

        }
        last->data=key;
        last->next=NULL;
        current->next=last;
    }
    
}
int count(struct node *head){
    int counter=0;
    node *current = head;
    while (current != NULL)
    {
        current=current->next;
        counter++;
    }
    return counter;
}

void printList(struct node *head){
    node *current=head;
    if (head=NULL)
    {
        printf("The list is empty");
        return;
    }
    else{
    while (current != NULL)
    {
        printf("%d ->",current->data);
        current=current->next;
    }

    }
    

    
}