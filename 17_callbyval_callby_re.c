#include <stdio.h>
//Call by Value
void function_call_value(int x)
{
    x = 50;
    printf("Value of x from function_call_value : %d\n", x);
}
//call by Address
void function_call_address(int *x)
{
    *x=100;
    printf("Value of x from function_call_address : %d\n", *x);
}

int main()
{
    int x = 10;
    function_call_value(x);
    printf("Value of x from main function before runnig this function_call_address : %d\n", x);
    function_call_address(&x);
    printf("Value of x from main function After runnig this function_call_address : %d\n", x);
    return 0;
}