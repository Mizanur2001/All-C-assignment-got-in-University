#include <stdio.h>
int main()
{
    int n, sum = 0, num;
    printf("Enter a positive number\n");
    scanf("%d", &n);
    while (n > 0)
    {
        num = n % 10;
        sum += num;
        n = n / 10;
    }
    printf("The sum of individual num is = %d\n", sum);

    return 0;
}