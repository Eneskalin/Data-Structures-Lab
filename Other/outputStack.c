#include <stdio.h>
#include <stdlib.h>

//Kodun Cikttisi

int values[8]={1,3,5,7,9,11,13,15};
stack s;

initialize(&s);

for (int i = 0; i < 8; i++)
{
    push(&s,values[i]);
}
int n=25;
for (int i = 0; i < 4; i++)
{
    n+=push(&s);
}
for (int i = 0; i < 2; i++)
{
    n-=pop(&s);
}

n-=pop(&s);
printf("%d",n);



/* 15   
   13  
   11  
   9   
   7   7         7
   5   5         5
   3   3         3
   1   1  n=73   1   n=61





*/
