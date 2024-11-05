#include <stdio.h>
#include <stdlib.h>

//Bir Bstde sadece sol çoçuğu olan düğümleri yazdıran fonksiyonu 

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;


void displayLeft(node *root){

    if (root == NULL)
    {
        return;
    }
    else{

         if (root->left !=NULL && root->right==NULL)
            printf("%d",root->data);
        
         displayLeft(root->left);
         displayLeft(root->right);
    }
    

}