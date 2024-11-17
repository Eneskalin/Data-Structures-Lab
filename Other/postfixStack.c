#include <stdlib.h>
#include <stdio.h>

/*Stack kullanarak postfix ifadeyi hesaplayin

ornek  3 2 * 5 6 * +
*/
#define MAX 100
int top=-1;
int stack[100];

int pop(){
    if (top==-1)
        return;
    int x=stack[top];
    top--;
}

void push(int x){
    if (top == MAX)
    {
        return;
    }
    stack[top]=x;
    top++;
}



int postfix(char str[]){
    int i=0;

    while (str[i]!='\0')
    {
        if (isdigit(str[i])) {
            int num = str[i] - '0'; // Karakteri tam sayıya dönüştür
            push(num);
        } 

        else if (str[i] == '+') {
            int b = pop();
            int a = pop();
            push(a + b);
        } else if (str[i] == '-') {
            int b = pop();
            int a = pop();
            push(a - b);
        } else if (str[i] == '*') {
            int b = pop();
            int a = pop();
            push(a * b);
        } else if (str[i] == '/') {
            int b = pop();
            int a = pop();
            if (b != 0) {
                push(a / b);
            } else {
                printf("Divide by zero error\n");
                return 0;
            }
        i++;

    }
    
    return pop();

}
}