#include<stdio.h>

int main()
{   int fn,sn,sum=0;
    printf("Enter The value First Number\n");
    scanf("%d",&fn);
    printf("Enter The value Second Number\n");
    scanf("%d",&sn);
    for(int i=1 ; i<=sn;i++){
        sum+=fn;
    }

    printf("The Product is %d\n",sum);
     return 0;
}