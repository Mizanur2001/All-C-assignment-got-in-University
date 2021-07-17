#include <stdio.h>
int addnumbers(int n)
{

    if (n != 0)
    {
        return n + addnumbers(n - 1);
    }
    else
    {
        return n;
    }
}
int main()
{
    int num;
    printf("Enter a positive integer:\n");
    scanf("%d", &num);
    printf("sum of first %d natural numbers are = %d\n",num, addnumbers(num));
    return 0;
}
