#include <stdio.h>
int main()
{
    float n1, n2, val;
    char ch;

    printf("Enter your operator(+,-,*, /, %%)\n");
    scanf("%c", &ch);
   
    printf("Enter your two operands\n");
    scanf("%f%f", &n1, &n2);

    switch (ch)
    {
    case '+':
        val = n1 + n2;
        printf("%.2f + %.2f = %.2f\n",n1,n2,val);
        break;

    case '-':
        val = n1 - n2;
        printf("%.2f - %.2f = %.2f\n",n1,n2,val);
        break;

    case '*':
        val = n1 * n2;
        printf("%.2f * %.2f = %.2f\n",n1,n2,val);
        break;

    case '/':
        val = n1 / n2;
        printf("%.2f / %.2f = %.2f\n",n1,n2,val);
        break;

    case '%':
        val = (int)n1 % (int)n2;
        printf("%d %% %d = %d\n",(int)n1,(int)n2,(int)val);
        break;

    default:
        printf("Invalid input\n");
        break;
    }
    return 0;
}