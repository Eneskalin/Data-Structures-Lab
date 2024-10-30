#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Write a C program that accepts a string and reverse it using a stack.

void reserve(char str[]){
    char arr[20];
    int top=strlen(str)-1;
    for (int i = top; i >= 0; i--)
    {
        printf("%c",str[i]);
    }
    
    

}

void main(){
    char str[20];
    printf("Enter a word\n");
    scanf("%s",str);
    reserve(str);
}