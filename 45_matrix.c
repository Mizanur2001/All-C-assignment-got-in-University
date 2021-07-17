#include <stdio.h>
int main()
{
    int a[3][2], b[3][2], c[3][2];
    int i, j;
    printf("Enter the value of first matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the Element [%d][%d]=", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the value of second matrix: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("Enter the Element [%d][%d]=", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    printf("The first matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", a[i][j]);
        }
        printf("\n");
    }
    printf("The second matrix is : \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("The result of Addition of matrix is: \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf("%d  ", c[i][j]);
        }
        printf("\n");
    }
   return 0;
}