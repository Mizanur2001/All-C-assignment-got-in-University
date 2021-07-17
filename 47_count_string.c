#include <stdio.h>

int main()
{
    char str[500];
    int i, c = 0, sp = 0;

    printf("Enter a string:\n");
    gets(str);
    for (i = 0; str[i] != '\0'; i++)
    {
        c++;
        if (str[i] == ' ')
        {
            sp++;
        }
    }
    printf("Number of character: %d\n", c);
    printf("Number of words: %d\n", sp + 1);
    return 0;
}