#include <stdio.h>
#include <string.h>
int main()
{
    char arr[100];
    int vowels = 0, consonent = 0, len;
    printf("Enter a string\n");
    gets(arr);
    len =strlen(arr);
    for (int i = 0; i < len; i++)
    {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z'))
        {
            switch (arr[i])
            {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowels++;
                break;

            default:
                consonent++;
                break;
            }
        }
    }
    printf("Vowels=%d\n",vowels);
    printf("consonent=%d\n",consonent);

    return 0;
}