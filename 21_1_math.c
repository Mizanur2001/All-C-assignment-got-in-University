#include <stdio.h>
#include <math.h>

void main()
{
    int counter, f_coun;
    float sum = 0, x, power, fact;

    printf("1- X^2/2! + X^4/4! - X^6/6! + X^8/8! - X^10/10!\n");
    printf("Enrer the value of X = ");
    scanf("%f", &x);

    for (counter = 0, power = 0; power <= 10; counter++, power = power + 2)
    {
        fact = 1;

        for (f_coun = power; f_coun >= 1; f_coun--)
        {
            fact *= f_coun;
        }

        sum = sum + (pow(-1, counter) * (pow(x, power) / fact));
    }

    printf("SUM = %f\n", sum);
}