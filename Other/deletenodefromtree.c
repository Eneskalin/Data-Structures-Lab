#include <stdlib.h>
#include <stdio.h>

/*Given a BST and a value x the task is to delete the nodes having values greater than or equal to x.
  verilmiş bst’de x sayısına eşit veya büyük olan düğümleri silen kod.
*/

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
}node;
node * addnode(node *root,int);
node * deletenode(node*root,int);
void main(){
    node * root=(node*)malloc(sizeof(node));
    root=NULL;
    root=addnode(root,5);
    root=addnode(root,8);
    root=addnode(root,9);
    root=addnode(root,15);
    root=addnode(root,0);
    root=deletenode(root,7);

}

node * addnode(node *root,int x){

    if (root == NULL)
    {
        root->data=x;
        return;
    }
    else if (x<root->data)
    {
        root->left=addnode(root->left,x);
    }
    else if (x>root->data)
    {
        root->right=addnode(root->right,x);
    }
    
}

node * deletenode(node*root,int x){

    if (root == NULL)
    {
        return;
    }
    else{
        if (root->data == x || root->data >x)
        {
            if (root->left ==NULL && root->right==NULL)
            {
                free(root);
                return NULL;
            }
            else{
                node *p,*q;
                if (root->left == NULL)
                {
                    p=root->right;
                    free(root);
                    return p;
                }
                else if (root->right ==NULL)
                {
                    p=root->left;
                    free(root);
                    return p;
                }
                else{
                    p=q=root->left;
                    while (p->right !=NULL)
                        p=p->right;
                    p->left=root->left;
                    free(root);
                    return q;
                }
                
                
            }
            
        }
        
    }
    
    
    
}