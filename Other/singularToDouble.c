#include <stdio.h>
#include <stdlib.h>

/*Input olarak vcnlcn bir SEL (tek bağlı liste) deki İlk clcmanı DLL (çift bağlı liste) nin son clenıanı
SLL deki ikinci elemanı DLL nin sondan ikinci elemanı böyle deızun edecek şekilde çift bağlı bir
listeye dönüştüren bir C fonksiyonu yazınız. Aşağıdaki örneğe hakım
Sınıfta şutlan İnsetl() gibi fonksiyonlan kullanmanıza İzin vcrilmcmcktcdir. Sadece tek bir fonksiyon
yazacaksınız Yazacağınız fonksiyon bir SLL alacak ve I)LL yi döndüreceklın

5->12->8->20

20<->8<->12<->5
*/

typedef struct singularToDouble
{
    int data;
    struct singularToDouble *next;
}sList;

typedef struct singularToDouble
{
    int data;
    struct singularToDouble *next;
    struct singularToDouble *prev;
}dList;


sList* convert(sList *sHead,dList *dHead){
    sList *temp=sHead;
    if (sHead->next == NULL)
    {
        return;
    }
    else{
        temp=convert(sHead->next,dHead);
        dList *temp2;
        dList *newnode=(dList*)malloc(sizeof(dList));
            newnode->prev=NULL;
            newnode->prev=NULL;
        if (dHead == NULL)
        {
            newnode->data=temp->data;
            dHead=newnode;
            temp2=dHead;
        }
        else{
            temp2->next=newnode;
            newnode->prev=temp2;
            newnode->next=NULL;
            temp2=temp2->next;
        }
        
    }
}