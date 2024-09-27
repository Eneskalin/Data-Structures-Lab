#include <stdio.h>

/*Soru 2) Bir sayının üssünü rekurisif(özyinelemeli) bir fonksiyon kullanarak hesaplayan bir program
yazınız. Fonksiyon iki parametre almalıdır: taban ve üs. Üs 0 ise sonuç 1, üs 1 ise sonuç tabanın
kendisi olacaktır. Üs negatif değer alamaz.
Fonksiyonun prototipi şu şekilde olmalıdır: int usAl(im taban, İÜ us);
Rekurisif olarak üs alma işlemi gerçekleştirilmelidir.
Kullanıcıdan taban ve üs değerleri alınacak, fonksiyon ile üs hesaplanacak ve sonuç
ekrana yazdırılacaktır.

 Write a program that pgvyecof a number using a cegucslygtungtigo. The
parameters: base and If the is O, the result will be 1 ; it the
is 1 , the rgsygwill be the The
The the be as follows: In!
The be performed
The and will be taken from the user, the will be
the tung!lgn, and the be printed on the
*/

int calculatePower(int base,int exponent,int base2){
    
    if (exponent<0)
    {
        return -1;
    }
    
    else if (exponent==0)
    {
        return  1;
    }
    else if (exponent == 1)
    {
        return base;
    }
    else{
        if (exponent !=1)
        {
            
            return calculatePower(base*base2,exponent-1,base2);
        }
        return base;
        
    }
    
    
}

void main(){

    int base,exponent;
    scanf("%d",&base);
    scanf("%d",&exponent);
    printf("%d",calculatePower(base,exponent,base));

}