# HISTORICAL STACK - LIST IMPLEMENTATION

In this lab, you will model undoing operations performed in a browser or an application by creating a stack structure with a linked list. Operations are added to the stack and when the user performs an undo operation, the most recent operation is removed from the stack.
#### Structure:
In this lab, we will create a stack using the following structure:

```
typedef struct node {
char operation[100]; 
struct node *next; 
} node;
typedef struct {
struct node *top; 
int cnt; 
} stack;
```
Steps:
1. Transaction: The user will add each new transaction to the stack.
2. Undo: When the user performs an undo operation, the last transaction will be undone.
3. Top Transaction: The transaction at the top of the stack represents the last transaction the user performed

Functions: 
1.	Push (Add Transaction):
Adds the new transaction made by the user to the stack.
2.	Top (Top Operation):
It will return the operation at the top of the stack.
3.	 Pop (Undo):
Removes the last transaction from the stack.

Example Main Structure:

```
int main() { 
stack s;
 s.top = NULL;
 s.cnt = 0;

 push(&s, "Opened Google");
 push(&s, "Searched for Data Structures");
 push(&s, "Opened Stack Overflow");
 printf("Current operation: %s\n", top(&s)); 
pop(&s); 
printf("After undo, current operation: %s\n", top(&s));

 return 0;
}

```
# 4. HAFTA: TARİHSEL YIĞIN - LİSTE UYGULAMASI
Bu laboratuvarda, bağlantılı liste içeren bir yığın yapısı oluşturarak bir tarayıcıda veya uygulamada gerçekleştirilen geri alma işlemlerini modelleyeceksiniz. İşlemler yığına eklenir ve kullanıcı bir geri alma işlemi gerçekleştirdiğinde, en son işlem yığından kaldırılır.
### Struct Yapısı:
Bu laboratuvarda, aşağıdaki yapıyı kullanarak bir yığın oluşturacağız:
```
typedef struct node {
char operation[100];
struct node *next;
} node;
typedef struct {
struct node *top;
int cnt;
} stack;
```

İşlevler:
1. Push (İşlem Ekle):
Kullanıcı tarafından yapılan yeni işlemi yığına ekler.
2. Top (En Üst İşlem):
Yığının en üstündeki işlemi döndürür.
3. Pop (Geri Al):
Yığından son işlemi kaldırır.

Adımlar:
1. İşlem: Kullanıcı her yeni işlemi yığına ekleyecektir.
2. Geri Alma: Kullanıcı bir geri alma işlemi gerçekleştirdiğinde, son işlem geri alınacaktır.
3. En Üstteki İşlem: Yığının en üstündeki işlem, kullanıcının gerçekleştirdiği son işlemi temsil eder. 

Örnek Main Fonksiyonu:
```
int main() {
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

```
