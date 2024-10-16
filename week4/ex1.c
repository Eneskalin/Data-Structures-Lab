/*In th1s lab, you w1ll 1mplement a doubly l1nked l1st to manage a collect1on of cars. The l1st
w1ll support two ma1n operat1ons: add1ng cars 1n sorted order based on the1r year of
manufacture and delet1ng cars from the l1st.
Object6ves:
1. Create a doubly l1nked l1st to store car 1nformat1on.
2. Implement two ma1n funct1ons:
a. AddSorted: Inserts a car 1nto the l1st, ma1nta1n1ng the order based on the car’s
year of manufacture.
void AddSorted (struct car **head, char model[], int year);
b. Delete: Removes a car from the l1st, g1ven the car’s 1nformat1on.
void Delete (struct car **head, char model[], int year);

Structures Def6n6t6on:
Def1ne a structure to represent a car and 1ts assoc1ated deta1ls:
struct car {
char model[50];
int year;
struct car *prev;
struct car *next;
};
Ma6n Program:
In the ma1n funct1on, you w1ll:
1. In1t1al1ze an empty doubly l1nked l1st of cars.
2. Use the AddSorted funct1on to add cars 1n order.
3. Use the Delete funct1on to remove spec1f1c cars from the l1st
*/

#include <stdlib.h>
#include <stdio.h>
#include<string.h>
typedef struct ex1
{
    char model[50];
    int year;
    struct ex1 *prev;
    struct ex1 *next;

}car;

void AddSorted(car **head,char model[],int year);
void Delete(car **head,char model[],int year);

void main(){

}

void AddSorted(car **head,char model[],int year){
    car *newCar=(car*)malloc(sizeof(car));
    strcpy(newCar->model,model);
    newCar->year=year;
    car *temp=*head;

    if (*head == NULL )
    {
        *head=newCar;
        newCar->next=NULL;
        newCar->prev=NULL;
    }
    else if (year<=(*head)->year)
    {
        newCar->next=(*head);
        (*head)->prev=newCar;
        newCar->prev=NULL;
        *head=newCar;
        return;
    }
    
    else{
        while (year>temp->year &&temp->next !=NULL)
        {
            temp=temp->next;
        }
        newCar->next=temp;
        newCar->prev=temp->prev;
        temp->prev->next=newCar;
        temp->prev=newCar;
        
    }
    
}

void Delete(car **head,char model[],int year){

    car *temp=*head;
    while (strcmp(temp->model,model)!=0 || temp->year != year) 
    {
        temp=temp->next;
    }
    temp->next->prev=temp->prev;
    temp->prev->next=temp->next;
    free(temp);
    
}