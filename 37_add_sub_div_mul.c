#include <stdio.h>
float add(float n1, float n2)
{
    float result;
    result = n1 + n2;
    return result;
}
float subtract(float n1, float n2)
{
    float result;
    result = n1 - n2;
    return result;
}
float multiply(float n1, float n2)
{
    float result;
    result = n1 * n2;
    return result;
}
float divide(float n1, float n2)
{
    float result;
    result = n1 / n2;
    return result;
}
int main()
{
    float num1, num2;
    printf("Enter two numbers:\n");
    scanf("%f%f", &num1, &num2);
    printf("%.2f+%.2f=%.2f\n", num1, num2, add(num1, num2));
    printf("%.2f-%.2f=%.2f\n", num1, num2, subtract(num1, num2));
    printf("%.2f*%.2f=%.2f\n", num1, num2, multiply(num1, num2));
    printf("%.2f/%.2f=%.2f\n", num1, num2, divide(num1, num2));
    return 0;
}
