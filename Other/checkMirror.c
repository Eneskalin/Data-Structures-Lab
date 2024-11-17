#include <stdio.h>
#include <stdlib.h>

/*Given a Binary Tree of size N, your task is to complete the functionisSymettric(),
 that check whether a binary is Symmetric or not, i.e. the binary tree is Mirror image of itself or not. 

 
  // Binary Ağacın simetrik olup olmadığını kontrol eden kodu yazınız.
*/
typedef struct checkMirror
{
    int data;
    struct checkMirror *left;
    struct checkMirror *right;
}node;


int checkMirror(node *root){
    
}