#include <stdio.h>
#include <stdlib.h>

/*Verilen bir ikili arama ağacında tüm sağ çocuklar ile sol çocukların yerlerini birbiri ile değiştiren fonksiyon
yazınız*/

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

void mirror(node *root){
    if (root == NULL)
    {
        return;
    }
    else{
    mirror(root->left);
    mirror(root->right);
    node* temp=root->left;
    root->left=root->right;
    root->right=temp;
    }
}