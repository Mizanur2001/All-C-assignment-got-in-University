#include <stdio.h>
long int fact(int n)
{
    int i, f = 1;
    for (i = n; i >= 1; i--)
    {
        f = f * i;
    }
    return f;
}
int main()
{
    int num, n, r, p, c;
    printf("Enter a number(For Factorial): \n");
    scanf("%d", &num);
    printf("The factorial is = %ld\n", fact(num));
    printf("Enter the value of 'n':\n");
    scanf("%d", &n);
    printf("Enter the value of 'r':\n");
    scanf("%d", &r);
    p = fact(n) / fact(n - r);
    c = fact(n) / (fact(r) * fact(n - r));
    if (r <= n)
    {
        printf("%dP%d = %d\n", n, r, p);
    }
    else
    {
        printf("Permutation Math ERROR!!\n");
    }
    if (r <= n)
    {
        printf("%dC%d = %d\n", n, r, c);
    }
    else
    {
        printf("Combination Math ERROR!!\n");
    }

    return 0;
}