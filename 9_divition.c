#include <stdio.h>
int main()
{
    int f, s, sum, result = 0;
    printf("Ener the first number\n");
    scanf("%d", &f);
    printf("Ener the Second number\n");
    scanf("%d", &s);
    sum = f + s;
    if (sum>s && sum>f)
    {
        while (sum > s)
        {
            sum = sum - s;
            result++;
        }
        printf("Result is %d\n", result);
    }
    else
    {
        printf("Error! Divition is not possible\n");
    }
    
    return 0;
}