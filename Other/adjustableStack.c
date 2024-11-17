    #include <stdlib.h>
    #include <stdio.h>

    /*Stack dizi push operasyonu ile doluysa diziyi genisletecek pop isleminde ise daralacak fonksiyonlari yaziniz*/

    int SIZE =5;
    typedef struct stack
    {
        int cnt;
        int top;
        int *arr[SIZE];
    }stack;



    void push(stack *q,int x){
        if (q->cnt==SIZE )
        {
            int arr2[SIZE*2];
            for (int i = 0; i < q->top; i++)
            {
                arr2[i]=q->arr[i];
            }
            SIZE=2*SIZE;
            q->arr=&arr2;
        }

        q->arr[q->top]=x;
        q->top++;
        q->cnt++;
    }


    int pop(stack *q){
        if (q->top == SIZE/2 )
        {
            int arr[SIZE];

            for (int i = 0; i < q->top; i++)
            {
                arr[i]=q->arr[i];

            }
            q->arr=&arr;
            
        }
        
    }
