#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Bir kelimenin veya cumlenin soldan ve sagdan sola dogru okunuslarinin ayni olup olmaidini  yazan bir program yaziniz.
Program kullanicidan bir cumle alacak  ve bu cumledekı harflerı hem stack a hemde queue ya koyacak.
Daha sonra queue dan cıkan her harf ıle stack harfını karsılastırıp palındrom olmadıgını karar verecek

*/

char str[40];

char addStack();
char addQueue();
int isPalindrom();


void main (){
    
    printf("Enter a sentence\n");
    scanf("%s",str);
    addStack(str);
    addQueue(str);
    if (isPalindrom())
    {
        printf("The number is Palindrom");
    }
    else{
        printf("The number is Palindrom");
    }
    

}

char popStack(){
    static int top=strlen(str)-1;
    return str[top];


}
char dequeue(){



}

int isPalindrom(){


}

