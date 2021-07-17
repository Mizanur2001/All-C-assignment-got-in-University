#include <stdio.h>
int main()
{
    int arr[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter value of arr[%d]\n", i);
        scanf("%d", &arr[i]);
    }
    
    printf("forward\n");
    for (int j = 0; j < 3; j++)
    {
        printf("%4d", arr[j]);
    }
     printf("\nreversed\n");
    for (int k = 2; k >= 0; k--)
    {
        printf("%4d", arr[k]);
    }
   printf("\n");
    return 0;
}