#include <stdio.h>

int main()
{
    char str[100], str1[100];
    printf("Enter the First strings : \n");
    gets(str);
    printf("Enter the Second strings : \n");
    gets(str1);
    int i = 0, f = 0;
    while (str[i] != '\0' && str1[i] != '\0')
    {
        if (str[i] != str1[i])
        {
            f = 1;
            break;
        }
        ++i;
    }

    if (f == 0)
        printf("String are equal\n");
    else
        printf("String are not equal\n");
    return 0;
}