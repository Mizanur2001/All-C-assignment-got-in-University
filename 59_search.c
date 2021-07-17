#include <stdio.h>
int main()
{
    int arr[100], n, search, check = 1;
    printf("Enter array size\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Entre array element at arr[%d]=", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the key element\n");
    scanf("%d", &search);
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == search)
        {
            printf("The key Element is found at arr[%d]\n", j);
            check = 0;
            break;
        }
    }
    if (check)
    {
        printf("No key Element is found in this array\n");
    }

    return 0;
}