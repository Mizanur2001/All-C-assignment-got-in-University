#include<stdio.h>
int main()
{   float p,t,i,A;
    printf("Entre The value of Principal\n");
    scanf("%f",&p);
    printf("Entre Time (in year)\n");
    scanf("%f",&t);
    printf("Entre The value of rate of interest\n");
    scanf("%f",&i);

    A=p*t*i/100;
    printf("Simple interest is %f\n",A);

     return 0;
}