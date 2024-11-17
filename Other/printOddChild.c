#include <stdlib.h>
#include <stdio.h>

//Bir ikili arama ağacındaki tek elemanları yazdıran fonksiyon;

typedef struct printPath
{
    int data;
    struct printPath *left;
    struct printPath *right;
}node;

void printOdd(node *root){

    if (root == NULL)
    {
        return;
    }
    else{
        if (root->data %2 ==1)
        {
            printf(root->data);
        }
        printOdd(root->left);
        printOdd(root->right);
        
    }
    
}