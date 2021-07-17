#include<stdio.h>
int main()
{
    int arr[10],roll,sum=0;
    char name[30];
    float per;
    printf("Enter Your name\n");
    gets(name);
    printf("Enter your Roll No\n");
    scanf("%d",&roll);
    for (int i = 1; i < 6; i++)
    {
       printf("Enter Marks of your %d subject=",i);
       scanf("%d",&arr[i]);
       sum+=arr[i];
    }
    per=(float)sum/5;
    printf("Your mane is %s\n",name);
    printf("And Roll No is %d\n",roll);
    printf("you got %.2f %%\n",per);
    
     return 0;
}