#include <stdio.h>

int main()
{
    int arr[8];
    int i, sum = 0;
    float avg;

    printf("\nenter elements in the array:\n");
    for (i = 0; i < 8; i++)
    {
        printf("Enter arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 8; i++)
    {
        sum = sum + arr[i];
    }
    avg =(float) sum / 8;
    printf("the sum is= %d\n", sum);
    printf("the avarage is= %.2f\n", avg);
    return 0;
}