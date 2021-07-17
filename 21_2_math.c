#include <stdio.h>
#include <math.h>
int main()
{
    int n, count, f_coun;
    float sum = 0, fact, x, power;
    printf("x-x3/3!+x5/5!...................Upto n\n");
    printf("Enrer the value of N = ");
    scanf("%d", &n);
    printf("Enrer the value of X = ");
    scanf("%f", &x);
    for (count = 0, power = 1; count < n; count++, power = power + 2)
    {
        fact = 1;

        for (f_coun = power; f_coun >= 1; f_coun--)
        {
            fact *= f_coun;
        }
        sum = sum + (pow(-1, count) * (pow(x, power) / fact));
    }
    printf("Sum = %f\n", sum);
    return 0;
}