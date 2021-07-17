#include <stdio.h>
#include <math.h>
int main()
{
    int x, n, sum = 0;
    printf("Enter the value of 'n' : \n");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("Enter the value of n more than 0 : \n");
        scanf("%d", &n);
    }
    printf("Enter the value of 'x' : \n");
    scanf("%d", &x);

    for (int i = 0; i <= n; i++)
    {
        sum = sum + pow(x, i);
    }
    printf("So x is not illegral for x = %d\n",x);
    printf("Sum of the given series : %d\n", sum);
    return 0;
}