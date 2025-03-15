#include <stdlib.h>
#include <stdio.h>

struct node {
 int data;
 struct node *left;
 struct node *right;
 };

  typedef struct node BTREE;

 void preorder(BTREE *root) {
 if(root != NULL) {
 printf("%d", root-> data);
 preorder(root-> left);
 preorder(root-> right);
 
 }
 }

  void inorder(BTREE *root) {
 if(root != NULL) {
 inorder(root-> left);
 printf("%d", root-> data);
 inorder(root-> right);
 }
 }

 void postorder(BTREE *root) {
 if(root != NULL) {
 postorder(root-> left);
 postorder(root-> right);
 printf("%d", root-> data);
 }
 }


 BTREE *new_node(int data) {
 BTREE *p = (BTREE*) malloc(sizeof(BTREE));
 p-> data = data;
 p-> left = NULL;
 p-> right = NULL;
 return p;
 }

 /* İkili ağaca veri ekleyen fonksiyon */
 BTREE *insert(BTREE *root, int data) {
 // Fonksiyona gönderilen adresteki ağaca ekleme yapılacak
    if(root != NULL) { // ağaç boş değilse
        if(data < root-> data) // eklenecek veri root’un data’sından küçükse
            root-> left = insert(root-> left, data);
    // eklenecek veri root’un data’sından büyük ya da eşitse
        else
            root-> right = insert(root-> right, data);
 }
 else // eğer ağaç boş ise
    root = new_node(data);
 return root;
 }

 /* İkili bir ağacın düğüm sayılarını veren fonksiyon */
 int size(BTREE *root) {
 if(root == NULL)
    return 0;
 else
    return size(root-> left) + 1 + size(root-> right);
 }

 int height(BTREE *root) {
    if(root == NULL)
        return-1;
    else {
        int left_height, right_height;
        left_height = height(root-> left);
        right_height = height(root-> right);
        if(right_height > left_height)
            return right_height + 1;
        else
            return left_height + 1;
 }
 }
 
 BTREE* delete_node(BTREE *root,int x){
    BTREE *p,*q;
    if (root == NULL)
        return NULL;
        if (root->data == x)
        {
            if (root->left==root->right)
            {
                free(root);
                return NULL;
            }
            else{
                if(root-> left == NULL) {
                    p = root-> right;
                    free(root);
                    return p;
                    }
                else if(root-> right == NULL){
                    p = root-> left;
                    free(root);
                    return p;
                }
                else {
                p = q = root-> right;
                while(p-> left != NULL)
                    p = p-> left;
                p-> left = root-> left;
                free(root);
                return q;
            }  
        }
 }

    else if(root-> data < x)
        root-> right = delete_node(root-> right, x);
    else
        root-> left = delete_node(root-> left, x);

 }