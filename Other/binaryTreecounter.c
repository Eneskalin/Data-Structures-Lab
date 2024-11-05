#include <stdio.h>
#include <stdlib.h>

/*Asagidaki fonksiyonlari gerceklestiren bir fonksiyon yazin
 addnode  - BTS a yeni agac ekler
 findMin  - BTS daki en kucuk degeri geri dondurur
 findMax  - BTS daki en buyuk degeri geri dondurur
 findSize - BTS deki dugum sayisini dondurur
 postOrder- Postorder a gore BTS de gezinir ve verileri ekrana yazdirir  Left Right Root
*/

typedef struct binaryTreecounter
{
    int data;
    struct binaryTreecounter *left;
    struct binaryTreecounter *right;
}node;

node* addNode(node * root,int x);
int findMin(node* root);
int findMax(node* root);
int findSize(node* root);
void postOrder(node* root);
void main(){
    node*root=NULL;
    root=addNode(root,7);
    root=addNode(root,-20);
    root=addNode(root,0);
    root=addNode(root,5);
    root=addNode(root,2);
    root=addNode(root,25);
    root=addNode(root,1);
    root=addNode(root,-5);
    root=addNode(root,55);
    printf("\n Min value of the BT : %d\n",findMin(root));
    printf("\n Max value of the BT : %d\n",findMax(root));
    printf("\n Size of the BT : %d\n",findSize(root));
    printf("\n-------------------------------------\n");
    postOrder(root);
}

node* addNode(node * root,int x){
    if (root==NULL)
    {
     node *newnode=(node*)malloc(sizeof(node));
     newnode->data=x;
     newnode->left=NULL;
     newnode->right=NULL;
     return newnode;
    }
    else{
        if (x<root->data)
        {
            root->left=addNode(root->left,x);
        }
        else if (x>root->data)
        {
            root->right=addNode(root->right,x);
        }
        return root;        
    }
}

int findMin(node* root){

    while (root->left != NULL)
    {
        root=root->left;
    }
    return root->data;
    
}

int findMax(node* root){

    while (root->right != NULL)
    {
        root=root->right;
    }
    return root->data;
    
}

int findSize(node* root){
    
    if (root == NULL)
    {
        return 0;
    }
    else{

        return 1+findSize(root->left)+findSize(root->right);
    }
}

void postOrder(node* root){
    if (root ==NULL)
    {
        return;
    }
    postOrder(root->left);
    postOrder(root->right);
    printf("%d\n",root->data);

}

