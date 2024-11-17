#include <stdlib.h>
#include <stdio.h>

//Write a program that finds and prints the smallest and largest values in a binary tree

typedef struct ex1
{
    int data;
    struct ex1 *left;
    struct ex1 *right;
}node;

node* addNode(node*,int);
int findMin(node*);
int findMax(node*);
void printPostorder(node*);


void main(){
    node* root=(node*)malloc(sizeof(node));
    root=NULL;

    root=addNode(root,5);
    root=addNode(root,7);
    root=addNode(root,2);
    root=addNode(root,9);
    root=addNode(root,1);
    root=addNode(root,0);
    root=addNode(root,3);
    root=addNode(root,-3);
    printf("Max value in BST is %d\n",findMax(root));
    printf("Min value in BST %d",findMin(root));
    printPostorder(root);
}

 node* addNode(node* root,int x){
    if (root == NULL)
    {
        node * newNode=(node*)malloc(sizeof(node));
        newNode->data=x;
        newNode->left=NULL;
        newNode->right=NULL;
        return newNode;
    }
    
        if (x>root->data)
        {
            root->right= addNode(root->right,x);
        }
        else if (x<root->data)
        {
            root->left=addNode(root->left,x);
        }
        return root;
}

int findMin(node*root){
    if (root==NULL)
    {
        return -1;
    }
    
    while (root->left !=NULL)
        root=root->left;
    
    return root->data;
    
}


int findMax(node*root){
    if (root==NULL)
    {
        return -1;
    }
    while (root->right !=NULL)
        root=root->right;
    
    return root->data;
    
}

void printPostorder(node* root){

    if (root==NULL)
    {
        return;
    }
    else{
        printPostorder(root->left);
        printPostorder(root->right);
        printf("\n---------------------------------\n");
        printf("%d",root->data);
    }
    


}