#include<stdio.h>
int main()
{
    int arr[100];
    int n,max=0,min;
    printf("Enter the length of array\n");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter Value of arr[%d]=",i);
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < n; j++)
    {
        if(arr[j]>max){
         max=arr[j];
        }
    }
    for (int k = 0; k < n; k++)
    {
        if(arr[k]<min){
         min=arr[k];
        }
    }
    printf("The max value is %d\n",max);
    printf("The min value is %d\n",min);

    
     return 0;
}