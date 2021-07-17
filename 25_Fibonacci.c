#include <stdio.h>
void main()
{
    int a = 0, b = 1, n = 0, sum = 0;
    printf("Enter the length of series \n ");
    scanf("%d", &n);
    printf("Fibonacci series is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%6d", a);
        sum = a + b;
        a = b;
        b = sum;
    }

    printf("\n");
}