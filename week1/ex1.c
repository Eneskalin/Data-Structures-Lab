#include <stdio.h>


/*Soru 1) Bir öğrenci öğrencinin iğtşj, ismi ve notu tutulacaktır. Vize ve final
notları bir fonksiyon aracılığıyla alınacak ve bu notlara göre öğrencinin genel notu hesaplanacaktır.
Öğrencinin genel notunu ekrana yazdıran bir program yazınız.
Öğrenci bilgiler bulunmalıdır: id, isim, not.
• Bir fonksiyon ile vize ve final notları alınıp, genel not hesaplanacaktır.
Hesaplanan genel not ekrana yazdırılacaktır.
Qygs!igm

l) The ID, name, and will be Kept by defining a student structure. A function
will and final gredes, and the overall will be to
these Write a program that the overall on the sgceen.
The student structure the information: ID, name, and graue.
A tung!jgmwill take and final grades, and the overall grade will be gaggu!aged.
The grp@will be punted on the *green.
1
*/
typedef struct students
{
    int studentId;
    char name[25];
    float grade;
}studentInfo;

float calculateGrade(float midterm,float final){
    float result = midterm*0.4+final*0.6;
    printf("%d. student grade`s is : %f\n",studentInfo.studentId,result);
}


void main (){
   
}