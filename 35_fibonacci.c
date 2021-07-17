#include<stdio.h>
 int main() 
{ 
int a=0,b=1,i,c; 

printf("Fibonacci Series:\n");
for(i=0;a<=300;i++)
     {
      printf("%d\n",a);
      c=a+b;
      a=b;
      b=c;
     }

 return 0; 
}