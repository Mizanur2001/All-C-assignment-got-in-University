#include <stdio.h>
#define PLUS +
#define MINUS -
#define MULT *
#define DIVIDE /
int main()
{
    int n, x, y;
    float z;
    printf("1.PLUS\n");
    printf("2.MINUS\n");
    printf("3.MULT\n");
    printf("4.DIVIDE\n");
    printf("Enter a choice\n");
    scanf("%d", &n);
    printf("Ener The Value of X :\n");
    scanf("%d", &x);
    printf("Ener The Value of Y :\n");
    scanf("%d", &y);
    switch (n)
    {
    case 1:
        z = x PLUS y;
        printf("X + Y = %.2f\n", z);
        break;

    case 2:
        z = x MINUS y;
        printf("X - Y = %.2f\n", z);
        break;

    case 3:
        z = x MULT y;
        printf("X * Y = %.2f\n", z);
        break;

    case 4:
        z =(float) x DIVIDE y;
        printf("X / Y = %.2f\n", z);
        break;

    default:
        printf("Invalid input\n");
        break;
    }

    return 0;
}