#include <stdio.h>
int m = 150;
int function()
{
    int n = 50;
    printf("Lcal variable (variable in Function): %d \n", n);
    printf("Global variable (variable in Function): %d \n", m);
}
int _static_function()
{
    int a = 100;
    static int b = 100;
    printf("Local Variaable in (_static_function) : %d\n", a);
    printf("static Variaable in (_static_function) : %d\n", b);
    a++;
    b++;
}
int main()
{
    int n = 10;
    printf("Local variable (in main Function): %d\n", n);
    printf("Global variable (in main Function): %d\n", m);
    function();
    _static_function();
    _static_function();
    _static_function();
    _static_function();
    return 0;
}