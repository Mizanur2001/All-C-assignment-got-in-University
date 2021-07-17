#include <stdio.h>
#include <string.h>
int main()
{
    char bin[50];
    int len, num;
    printf("Enter a  Binary number\n");
    scanf("%s", &bin);
    len = strlen(bin);
    for (int i = len - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
        {

            num = i;
            break;
        }
    }
    for (int j = num - 1; j >= 0; j--)
    {
        if (bin[j] == '0')
        {
            bin[j] = '1';
        }
        else
        {
            bin[j] = '0';
        }
    }
    printf("2's Compliment  is %s\n", bin);

    return 0;
}