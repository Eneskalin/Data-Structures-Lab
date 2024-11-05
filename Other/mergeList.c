    #include <stdlib.h>
    #include <stdio.h>

    /*Merge two sorted Linked List.Given two sorted linked  lists  merge them into one sorted list  and return the head
    of the new list
    */

    typedef struct mergeList
    {
        int data;
        struct mergeList *next;
    }node;
    node *head1;
    node *head2;
    node * addNode(node *head,int data);
    void display(node *);

    node* mergeList(node *head1,node *head2);
    void main(){
        node *head1=NULL;
        head1 =addNode(head1,8);
        head1 =addNode(head1,10);
        head1 =addNode(head1,12);
        head1 =addNode(head1,17);


        node *head2=NULL;
        head2 =addNode(head2,7);
        head2 =addNode(head2,14);
        head2 =addNode(head2,25);
        head2 =addNode(head2,27);
        node *head=mergeList(head1,head2);
        display(head);


    }


    node* addNode(node *head,int data){
        node *temp= (node*) malloc(sizeof(node));
        
        if (head == NULL)
        {
            temp->data=data;
            temp->next=NULL;
            head=temp;
            return head;
        }
        else{
            temp->data=data;
            temp->next=head;
            head=temp;
            return head;
        }
        

    }

    node* mergeList(node *head1,node *head2){

        node * nextValue=head1->next;
        node *head;
        while (head1 !=NULL && head2 !=NULL)
        {
            if (head1->data <= head2->data)
            {
                
                head1->next=head2;
                head=head1;
                head2=head1;
                head1=nextValue;
                nextValue=nextValue->next;
            }
            if (/* condition */)
            {
                /* code */
            }
            

            
        }
        
    }

void display(node *head) {
    node *temp = head;
    while (temp != NULL) {
        printf("%d", temp->data);
        if (temp->next != NULL) {
            printf("->");
        }
        temp = temp->next;
    }
    printf("\n");
}

