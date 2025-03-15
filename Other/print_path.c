#include <stdlib.h>
#include <stdio.h>

typedef struct node
{
    int data;
    node *left;
    node *right;
} node;

void print_path(node *root, int x)
{
 if (root->left == NULL && root->right==NULL)
 {
    return ;
 }
 if (x>root->data)
 {
    printf("To the right of %d",root->data);
    print_path(root->right,x);
 }
 else{
    printf("To the left of %d",root->data);
    print_path(root->left,x);

 }
   
}



