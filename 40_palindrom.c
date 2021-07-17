#include <stdio.h>

int main()
{
    char str[1000];
    printf("Enter the string : \n");
    gets(str);
    int i = 0;
    while (str[i] != '\0')
        i++;
    int n = i - 1, f = 0;
    while (i >= 0)
    {
        if (str[i] != str[n - i])
            f = 1;
        i--;
    }
    if (f == 0)
    {
        printf("String is palindrome \n");
    }
    else
    {
        printf("Strig is not palindrome \n");
    }
    return 0;
}