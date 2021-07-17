#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);

    if (n % 5 == 0)
        printf("Number is multiple of 5\n");
    else
        printf("Number is not a multiple of 5\n");
    if (n % 7 == 0)
        printf("Number is divisble by 7\n");
    else
        printf("Number is not divisible by 7\n");
    if (n % 11 != 0)
        printf("Number is not divisible by 11\n");
    else
        printf("Number is divisble by 11\n");
    return 0;
}