#include <stdlib.h>
#include <stdio.h>

//Stack kullanarak sayinin polindrom olup olmadigini kontrol ediniz

int main(){
    char s[100];
    printf("Enter a string");
    scanf("%s",s);

    check(s);
    return 0;
}

void check(char s[]){
    int i=0;

    while (s[1]!='X')
    {
        push(s[i]);
        i++;    
    }
    i++;
    while (s[i])
    {
        if (isEmpty()|| s[i]!=pop())
        {
            printf("NOT");
            exit(1);
        }
        i++;
        
    }
    


}