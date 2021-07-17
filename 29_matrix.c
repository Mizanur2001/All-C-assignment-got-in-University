#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j;
    printf("Enter the value of first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the Element [%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("\n");

    printf("Enter the value of second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the Element [%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("\n");

    printf("The first matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("The second matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < 3; k++)
            {
                c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
    }

    printf("Multiplication of two matrices is\n ");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%5d", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}