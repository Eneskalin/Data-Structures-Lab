#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct addDoubleList
{
    int employeeNo;
    char name[20];
    struct node *next;
    struct node *prev;

}employee;
void main(){
    employee *head=(employee*)malloc(sizeof(employee));
    strcpy(head->name,"enes");
    head->employeeNo=12;
    employee *node1=(employee*)malloc(sizeof(employee));
    head->next=node1;
    strcpy(node1->name,"veli");
    node1->employeeNo=22;

    

}



void addEmployee(employee*head,char name[],int employeeNo){
    employee *newEmployee=(employee*)malloc(sizeof(employee));
    newEmployee->employeeNo=employeeNo;
    strcpy(newEmployee->name,name);
    employee *current=head;
    while (current !=NULL)
    {

        if (current->employeeNo >=employeeNo && current->next->employeeNo <=employeeNo )
        {
            break;
        }
        current=current->next;
        
    }
    newEmployee->next=current->next;
    current->next=newEmployee;
    newEmployee->prev=current;
    newEmployee->next->prev=newEmployee;
    
}