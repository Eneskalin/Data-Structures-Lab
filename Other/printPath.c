#include <stdio.h>
#include <stdlib.h>

/*.3-) (25 pts) Write a C function to find and print the path to insert a node into a BST Ktarting from the
root. The function all not insert
I R: 13Sl'ye bir düğüm cklcmck İçin kökten başlayarak yolu bulan ve bu yolu sırasıyla yazdıran bil
fonksiyonu yazın. Fonksiyonunuz ekleme (İnsert) yapmayacaktır.
For example, if you call printmaih(20) for the follomng BST, the function v.ill print out as follov,s
Örneğin, aşağıdaki B.ST İçin printpalh(20) Iltnksiyonunu çağırırsanız fonk«iyon sağdaki gibi çıktı
vcrccckt İr.

To the left of 50
To the right of 17
To the left of 23
To the right of 19
*/

typedef struct printPath
{
    int data;
    struct printPath *left;
    struct printPath *right;
}node;


void printPath(node* root,int data){

    if (root ==NULL)
        return;

    if (data > root->data)
    {
        printf("Right of the %d",root->data);
        printPath(root->right,data);
    }
    else if (data<root->data)
    {
        printf("Left of the %d",root->data);
        printPath(root->left,data);
    }
}