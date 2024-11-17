#include <stdlib.h>
#include <stdio.h>

//Stack kullanarak verilen decimal sayiyi binary e cevirin

typedef struct stack
{
    int top;
    int counter;
    int arr[20];
}stack;



void converBinary(int x){
    while (x !=0)
    {
        push(x%2);
        x=x/2;
    }
    

}