#include <stdio.h>
#include <stdlib.h>

/*Parantez Eşleşmesi

Bir dizgede açılış ( ve kapanış ) parantezlerinin eşleşmesini kontrol eden bir program yazın.
Örneğin: (a + b) * (c - d) geçerli iken, ((a + b) geçersizdir.
İpucu: Açılış parantezlerini stack'e push yapın; kapanış parantezi gördüğünüzde stack'ten pop yaparak kontrol edin.

*/

int checkBracket(char str[]) {
    char stack[100];  
    int top = 0;      
    int i = 0;        
    
    while (str[i] != '\0') {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[top] = str[i];  
            top++;               
        } 
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {
           
            if (top == 0 || 
                (str[i] == ')' && stack[top - 1] != '(') ||
                (str[i] == ']' && stack[top - 1] != '[') ||
                (str[i] == '}' && stack[top - 1] != '{')) {
                return 0; 
            }
            top--; 
        }
        i++;
    }

    
    return top == 0;
}

int main() {
    char expr[100];
    printf("Parantez ifadesini girin: ");
    scanf("%s", expr);

    if (checkBracket(expr)) {
        printf("Parantezler dengeli.\n");
    } else {
        printf("Parantezler dengesiz.\n");
    }

    return 0;
}
