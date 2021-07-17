#include<stdio.h>
int main()
{   
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sum=0;
    float avg,*pavg;
    int *parr,*psum;
    parr=&arr[0];
    psum=&sum;
    pavg=&avg;
    for (int i = 0; i < 10; i++)
    {
         *psum+=*(parr+i);
    }
    *pavg=(float)*psum/10;
    printf("The Sum is %d\n",sum);
    printf("The avg is %.2f\n",avg);

     return 0;
}