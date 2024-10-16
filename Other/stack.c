#include <stdio.h>
#include <stdlib.h>
int *dizi;
int size=2;
int top=0;
int pop(){
    if (top<=size/4)
    {
        int *dizi2=(int*)malloc(2/size*sizeof(int));
    for (int i = 0; i < size; i++)
        dizi2[i]=dizi[i];
    free(dizi);
    dizi=dizi2;
    size=size*2;
    }

    
    return dizi[--top];

}
void push(int a){
    if (top >=size)
    {
        int *dizi2=(int*)malloc(2*size*sizeof(int));
        for (int i = 0; i < size; i++)
            dizi2[i]=dizi[i];
        free(dizi);
        dizi=dizi2;
        size=size*2;
            
        
        
    }
    
    dizi[top++]=a;
}
void print(){
    for (int i = 0; i < top; i++)
    {
        printf("%d",dizi[i]);
    }
    
}

void main(){
    dizi=(int *)malloc(sizeof(int)*2);
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    print();
    printf("Pooped %d",pop());
    printf("Pooped %d",pop());


}
