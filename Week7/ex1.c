#include <stdio.h>
#include <stdlib.h>

/*WEEK 7
BINARY SEARCH TREE
In this lab, you are expected to create a Binary Search Tree (BST) structure. In the main function, you need to get numbers from the user and add 
them to the BST. When adding each number, the number will be placed in an appropriate position (left or right) according to the structure of the
tree: If the number added is smaller than the number in the node, it is added to the left, if it is larger, it is added to the right. The aim of
the lab is to understand the sequential structure of the BST and the logic of adding data. After the addition operations are completed, you can
print the tree to the screen in order with the inorder traversal method.


Bu labda, bir Binary Search Tree (BST) yapısı oluşturmanız beklenmektedir. main fonksiyonunda kullanıcıdan sayı alarak bu sayıları BST’ye
 eklemeniz gerekmektedir. Her bir sayı eklenirken, sayı ağacın yapısına göre uygun bir pozisyona (sol veya sağ) yerleştirilecektir: Eklenen sayı 
 düğümdeki sayıdan küçükse sola, büyükse sağa eklenir. Laboratuvarın amacı, BST’nin sıralı yapısını ve veri ekleme mantığını anlamaktır. Ekleme
  işlemleri tamamlandıktan sonra, inorder traversal (sıralı gezme) yöntemiyle ağacı sıralı şekilde ekrana yazdırabilirsiniz.

*/

typedef struct ex1
{
    int data;
    struct ex1 *left;
    struct ex1 *right;
}node;
node* addNode(node *root,int x);
void inorderTraversal(node *root);

int main(){
    node *root=NULL;
    root=addNode(root,5);
    root=addNode(root,4);
    root=addNode(root,7);
    root=addNode(root,1);
    root=addNode(root,15);
    inorderTraversal(root);


    return 0;
}

node* addNode(node* root,int x){
    if (root == NULL)
    {
        node* newnode=(node*)malloc(sizeof(node));
        newnode->left=NULL;
        newnode->right=NULL;
        newnode->data=x;
        return newnode;
        
    }
    
    if (x<root->data)
    {
        root->left= addNode(root->left,x);
    }
    else if(x>root->right){
        root->right= addNode(root->right,x);
    }
    return root;
}

void inorderTraversal(node *root){
    if (root ==NULL)
    {
        return;
    }

    inorderTraversal(root->left);
    printf("%d",root->data);
    inorderTraversal(root->right);
    

}