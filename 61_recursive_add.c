#include <stdio.h>
int add(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    else
    {
        return (1 + add(x, y - 1));
    }
}
int main()
{
    int x, y, result;
    printf("enter two numbers\n");
    scanf("%d%d", &x, &y);
    result = add(x, y);
    printf("sum of two numbers are %d\n", result);
    return 0;
}
