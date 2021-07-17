#include <stdio.h>
int main()
{
    int f, s, gcd,lcm;
    printf("Enter The first Number\n");
    scanf("%d", &f);
    printf("Enter The Second Number\n");
    scanf("%d", &s);
    for (int i = 1; i <= f && i <= s; i++)
    {
        if (f % i == 0 && s % i == 0)
        {
            gcd = i;
        }
    }
    lcm=f*s/gcd;
    printf("GCD of %d and %d is= %d\n",f,s,gcd);
    printf("LCM of %d and %d is= %d\n",f,s,lcm);

    return 0;
}