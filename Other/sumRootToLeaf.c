#include <stdio.h>
#include <stdlib.h>

/*Girilen bir x değeri, kökten itibaren yaprak dahil olmak üzere o yol üzerindeki verilerin toplamına eşitse
 true, eşit değilse false döndüren path isimli programı kodlayınız.*/

 typedef struct node
 {
    int data;
    struct node*left;
    struct node*right;

 }node;
 

 int path(node *root,int x,int sum){

    if (root==NULL)
        return 0;

    sum+=root->data;
    if (root->data == x)
    {
        if (sum==x)
            return 1;
        else
            return 0;   
    }
    else{
        if (x>root->data){
            path(root->right,x,sum);
            
        }
        else{
            path(root->left,x,sum);
            
        }
    }

    
    



    


 }