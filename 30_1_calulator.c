#include <stdio.h>
int main()
{
    int x, y, z;
    char ch1;
    puts("Enter mathematical operator like (+ - * /)");
    scanf("%c",&ch1);
    puts("Enter The Value of X : ");
    scanf("%d", &x);
    puts("Enter The Value of Y : ");
    scanf("%d", &y);
    
    switch (ch1)
    {
    case '+':
        z = x + y;
        printf("X + Y = %d\n", z);
        break;
    case '-':
        z = x - y;
        printf("X - Y = %d\n", z);
        break;
        break;
    case '*':
        z = x * y;
        printf("X * Y = %d\n", z);
        break;
    case '/':
        z = x / y;
        printf("X / Y = %d\n", z);
        break;

    default:
    puts("You have enter A Wrong character!!!!");
        break;
    }
    return 0;
}