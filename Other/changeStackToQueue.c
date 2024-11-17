#include <stdio.h>
#include <stdlib.h>

//bir stack ile queuenin icerigini degistiren kodu yaziniz


// Stack yapısı
typedef struct {
    int top;
    int arr[20];
} Stack;

// Queue yapısı
typedef struct {
    int front;
    int rear;
    int arr[20];
} Queue;

// Stack işlemleri
void push(Stack *s, int value) {
    s->arr[++(s->top)] = value;
}

int pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack is empty\n");
        return -1;
    }
    return s->arr[(s->top)--];
}

int isStackEmpty(Stack *s) {
    return s->top == -1;
}

// Queue işlemleri
void enqueue(Queue *q, int value) {
    q->arr[++(q->rear)] = value;
}

int dequeue(Queue *q) {
    if (q->front > q->rear) {
        printf("Queue is empty\n");
        return -1;
    }
    return q->arr[(q->front)++];
}

int isQueueEmpty(Queue *q) {
    return q->front > q->rear;
}

// Stack ve Queue içeriğini değiştiren fonksiyon
void swap(Stack *s, Queue *q) {
    Stack tempStack;
    tempStack.top = -1;

    // Stack içeriğini geçici stack'e taşı
    while (!isStackEmpty(s)) {
        push(&tempStack, pop(s));
    }

    // Queue içeriğini Stack'e taşı
    while (!isQueueEmpty(q)) {
        push(s, dequeue(q));
    }

    // Geçici stack içeriğini Queue'ya taşı
    while (tempStack.top != -1) {
        enqueue(q, pop(&tempStack));
    }
}

int main() {
    Stack s;
    s.top = -1;

    Queue q;
    q.front = 0;
    q.rear = -1;

    // Stack ve Queue'yu doldur
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);

    enqueue(&q, 4);
    enqueue(&q, 5);
    enqueue(&q, 6);

    // Swap işlemi
    swap(&s, &q);

    // Sonuçları göster
    printf("Stack içeriği:\n");
    while (!isStackEmpty(&s)) {
        printf("%d ", pop(&s));
    }

    printf("\nQueue içeriği:\n");
    while (!isQueueEmpty(&q)) {
        printf("%d ", dequeue(&q));
    }

    return 0;
}
