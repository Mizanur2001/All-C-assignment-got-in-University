#include <stdio.h>
int main()
{
    int x, y;
    float z;
    char op[20];
    printf("Enter Operator like\nz=xPLUSy\nz=xMINUSy\nz=xMULTy\nz=xDIVIDEy\n");
    scanf("%s", &op);
    printf("Enter the value of X : \n");
    scanf("%d", &x);
    printf("Enter the value of Y : \n");
    scanf("%d", &y);
    // z=xMINUSy
    if (op[0] == 'z' && op[1] == '=' && op[2] == 'x' && op[3] == 'P' && op[4] == 'L' && op[5] == 'U' && op[6] == 'S' && op[7] == 'y')
    {
        z = x + y;
        printf("X + Y = %f\n", z);
    }
    else if (op[0] == 'z' && op[1] == '=' && op[2] == 'x' && op[3] == 'M' && op[4] == 'I' && op[5] == 'N' && op[6] == 'U' && op[7] == 'S' && op[8] == 'y')
    {
        z = x - y;
        printf("X - Y = %f\n", z);
    }
    else if (op[0] == 'z' && op[1] == '=' && op[2] == 'x' && op[3] == 'M' && op[4] == 'U' && op[5] == 'L' && op[6] == 'T' && op[7] == 'y')
    {
        z = x * y;
        printf("X * Y = %f\n", z);
    }
    //DIVIDE
    else if (op[0] == 'z' && op[1] == '=' && op[2] == 'x' && op[3] == 'D' && op[4] == 'I' && op[5] == 'V' && op[6] == 'I' && op[7] == 'D' && op[8] == 'E' && op[9] == 'y')
    {
        z =(float) x / y;
        printf("X / Y = %4f\n", z);
    }
    else
    {
        printf("ERROR!!!..\n");
    }

    return 0;
}