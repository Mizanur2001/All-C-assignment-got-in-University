#include <stdio.h>
typedef struct complex
{
    float real;
    float imag;

} complex;

int main()
{
    complex n1, n2, result_add, result_sub;
    printf("Enter 1st complex number\n");
    printf("Enter real part and complex\n");
    scanf("%f%f", &n1.real, &n1.imag);
    printf("Enter 2st complex number\n");
    printf("Enter real part and complex\n");
    scanf("%f%f", &n2.real, &n2.imag);
    result_add.real = n1.real + n2.real;
    result_add.imag = n1.imag + n2.imag;
    result_sub.real = n1.real - n2.real;
    result_sub.imag = n1.imag - n2.imag;
    printf("(%.2f + %.2fi) + (%.2f + %.2fi) =%.2f + %.2fi\n", n1.real, n1.imag, n2.real, n2.imag, result_add.real, result_add.imag);
    printf("(%.2f + %.2fi) - (%.2f + %.2fi) =%.2f + %.2fi\n", n1.real, n1.imag, n2.real, n2.imag, result_sub.real, result_sub.imag);

    return 0;
}