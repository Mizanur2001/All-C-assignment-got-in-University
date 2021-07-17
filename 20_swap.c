#include<stdio.h>
int main()
{   int a,b;
    printf("Enter First number\n");
    scanf("%d",&a);
    printf("Enter Second number\n");
    scanf("%d",&b);
    printf("Before Swap a=%d and b=%d\n",a,b);
    //a=10 b=20
    a=a+b;//10+20= 30 
    b=a-b;//30-20=10
    a=a-b;//30-10=20
    printf("After Swap a=%d and b=%d\n",a,b);

     return 0;
}