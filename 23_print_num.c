#include <stdio.h>
int main()
{
    int j, m = 16;
    printf("Print Number parten\n");
    for (int i = 1; i <= 5; i++)
    {
        int n = 6;
        for (j = i; j <= m - i; j = j + n)
        {
            printf("%5d", j);
            n--;
            if (n == 0 || i == 5)
            {
                break;
            }
        }
        printf("\n");
    }

    return 0;
}