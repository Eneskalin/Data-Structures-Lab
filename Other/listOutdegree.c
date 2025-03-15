#include <stdlib.h>
#include <stdio.h>

// KOMŞULUK LİSTELERİ İLE TESLİM EDİLMİŞ BİR GRAFTA VERİLEN BİR TEPENİN ÇIKIŞ DERECESİNİ 
// BULAN BİR FONK

typedef struct listOutdegree
{
    /* data */
}node;


int findOutdegree( node *graph[],int v){
    int cnt=0;
    node *temp=graph[v];
    while (temp->next != NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
