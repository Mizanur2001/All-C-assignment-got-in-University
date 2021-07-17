#include <stdio.h>
int main()
{
    int n, i, j, c;
    printf("enter the number\n");
    scanf("%d", &n);
    printf("The Prime Number's are\n");
    for (i = 1; i <= n; i++)
    {
        c = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                c++;
            }
        }
        if (c == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}