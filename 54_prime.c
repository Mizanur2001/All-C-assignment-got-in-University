#include <stdio.h>
int isprime(int a)
{
    for (int i = 2; i*i <= a ; ++i)
    {
        if (a % i == 0)
        {
            return 0;
            break;
        }
    }
    return 1;
}

int main()
{
    int n1, n2, val;
    printf("Enter two positive range\n");
    scanf("%d%d", &n1, &n2);
    printf("Prime numbers between %d and %d are: ", n1, n2);
    for (int i = n1 + 1; i < n2; ++i)
    {
        val =isprime(i);
        if (val == 1)
        {
            printf("%3d", i);
        }
    }
    printf("\n");
    return 0;
}