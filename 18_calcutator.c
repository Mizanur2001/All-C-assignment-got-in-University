#include <stdio.h>
float function_add(float a, float b)
{
    return a + b;
}
float function_sub(float a, float b)
{
    return a - b;
}
float function_mul(float a, float b)
{
    return a * b;
}
float function_div(float a, float b)
{
    return a / b;
}
int function_mod(int a, int b)
{
    return a % b;
}

int main()
{
    float f, s;
    int n;
    printf("1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Modulo\nenter a choice\n");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("Enter First number\n");
        scanf("%f", &f);
        printf("Enter second number\n");
        scanf("%f", &s);
        printf("addition of two is %.2f\n", function_add(f, s));
        break;
    case 2:
        printf("Enter First number\n");
        scanf("%f", &f);
        printf("Enter second number\n");
        scanf("%f", &s);
        printf("Subtraction of two is %.2f\n", function_sub(f, s));
        break;
    case 3:
        printf("Enter First number\n");
        scanf("%f", &f);
        printf("Enter second number\n");
        scanf("%f", &s);
        printf("Multiplication of two is %.2f\n", function_mul(f, s));
        break;
    case 4:
        printf("Enter First number\n");
        scanf("%f", &f);
        printf("Enter second number\n");
        scanf("%f", &s);
        printf("Division of two is %.2f\n", function_div(f, s));
        break;
    case 5:
        printf("Enter First number\n");
        scanf("%f", &f);
        printf("Enter second number\n");
        scanf("%f", &s);
        printf("Modulo of two is %d\n", function_mod((int)f, (int)s));
        break;

    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}