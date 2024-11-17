#include <stdio.h>
#include <stdlib.h>

/*2-) (20 pts) Write a function Add-Max that adds the largest node value to all nodes (including
itself) in a given single linked list. For example, the list below stores the following elements:
[S, 4, 7, 2, 9, 4, 5, 31 If you made the call ofAddMa.x(head), the list would then store the
elements: [17, 13, 16, 11, 18, 13. 14, 12]

Tek bağlı Liste içinde en bibilik- sayıyı tüm düğümlere (kendi dahil) ekleyen bir AddMa.x fonksiyonu
yazım Mesela: [8, 4, 7, 2, 9, 4, 5, 3] listesi için AddMa.x(head) fonksiyonunu çağırınca liste
[17, 13, 16.11, ı8, 13, 14.12] olacaklır.
*/

typedef struct addMax
{
    int data;
    node *next;
}node;


void addMax(node*head){
    node *current=head;
    int max=head->data;
    while (current != NULL)
    {
        if (max<current->data)
        {
            max=current->data;
        }
        current=current->next;
    }
    current=head;
    while (current !=NULL)
    {
        current->data+=max;
    }

}