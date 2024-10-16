#include <stdio.h>
#include <stdlib.h>

/*Fonksiyona parametre olarak gelen sayının tam bölenlerini, tanımlanan “q” listesine sırasıyla ekleyen fonksiyonu yazınız? 
( Ör: 12 sayısı için; 1,2,3,4,6 ve 12 tam bölenleridir.)
*/
typedef struct qlist
{
    int num;
    struct qlist *next;
}qlist;


qlist *addQlist(int num);

void main(){
    addQlist(12);
}

qlist *addQlist(int num){
    int div=1;
    qlist *head=NULL;
    qlist *temp=(qlist *)malloc(sizeof(qlist));
    while (div != num)
    {
        qlist *temp=(qlist *)malloc(sizeof(qlist));
        if (num%div == 0)
        {
            temp->num=num;
            

        }
        
    }
    
}