#include <stdio.h>
int main()
{
    int n, large = 0, small;
    int array[30];
    printf("Enter the Array size \n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter the value fo %d array \n", i);
        scanf("%d", &array[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (large < array[i])
        {
            large = array[i];
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (small > array[j])
        {
            small = array[j];
        }
    }
    printf("The largest number is %d\n", large);
    if (large % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    printf("The smallest number is %d\n", small);
    if (small % 2 == 0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }

    return 0;
}