#include <stdio.h>
#include <stdlib.h>

//İkili arama ağacındaki çift elemanların tıoplamını yazdıran fonksiyon;

typedef struct printPath
{
    int data;
    struct printPath *left;
    struct printPath *right;
}node;

void sumEven(node *root,int sum){
    if (root==NULL)
    {
        return;
    }
    if (root->data %2 == 0)
    {
        sum+=root->data;
        sumEven(root->left,sum++);
    }
    else{
        sumEven(root->left,sum);
    }
    

    

}