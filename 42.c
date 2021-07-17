#include<stdio.h>
#include<string.h>

int main() 
{
 char name[11]="UNIVERSITY";
 int len;
  len= strlen(name);
 //  printf("%d\n",len);
  for(int i=0;i<=len-3;i=i+2) 
     { 
      for(int j=0;j<=i+1;j++)
        { 
          printf("%c",name[j]); 
         } 
     printf("\n");
     } 

 for(int k=len-1;k>=1;k=k-2)
    { 
      for(int l=0;l<=k;l++)
         { 
          printf("%c",name[l]); 
         }
     printf("\n"); 
    } 
  return 0;
}