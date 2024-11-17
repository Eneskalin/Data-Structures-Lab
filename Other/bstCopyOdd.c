#include <stdio.h>
#include <stdlib.h>

/*11)Bir ikili arama ağacındaki verilerden tek olanları diğer bir BST ağacına kopyalayan copyOdd isimli
fonksiyonu yazın.*/

typedef struct node{
    int data;
    struct node *left;
    struct node *right;
}node;

node *insertData(node*root2,int data);

void copyOdd(node *root1,node *root2){

    if (root1==NULL)
        return;
    else{
        if (root1->data%2!=0)
        {
            insertData(root2,root1->data);
        }
        copyOdd(root1->left,root2);
        copyOdd(root1->right,root2);
    }
    


    
}

node *insertData(node*root2,int data){
    if (root2==NULL)
    {
        node* newnode=(node*)malloc(sizeof(node));
        root2->data=data;
        root2->left=NULL;
        root2->right=NULL;
        return newnode;
    }
    else{
        if (data>root2->data)
            root2=insertData(root2->right,data);
        if (data<root2->data)
            root2=insertData(root2->right,data);
    }

}