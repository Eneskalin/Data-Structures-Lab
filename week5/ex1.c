#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node {
char operation[100]; 
struct node *next; 
} node;

typedef struct {
struct node *top; 
int cnt; 
} stack;


void pop(stack *s);
void push(stack *s,char string[]);
char *top(stack *s);
int main(){
    stack s;
    s.top = NULL;
    s.cnt = 0;

    push(&s, "Google Açıldı");
    push(&s, "Veri Yapıları Arandı");
    push(&s, "Stack Overflow Açıldı");
    printf("Geçerli işlem: %s\n", top(&s));
    pop(&s);
    printf("Geri Aldıktan sonra, geçerli işlem: %s\n", top(&s));

return 0;
}

void push(stack *s,char string[]){
    node *newnode=(node *)malloc(sizeof(node));
    if (newnode == NULL)
    {
        printf("Allocation failed");
        return;
    }


    else{
        strcpy(newnode->operation,string);
        newnode->next=s->top;
        s->top=newnode;
        s->cnt++;
    }


}

void pop(stack *s){
    if (s->top == 0 )
    {
        printf("Stack is empty");
        return;
    }
    else{
        node *temp=s->top;
        s->top=s->top->next;
        free(temp);
        s->cnt--;

    }

}

char * top(stack *s){
    if (s->top == NULL)
    {
        return "Stack empty";
    }
    
    return s->top->operation;
}



