#include <stdio.h>
#include <string.h>
int main()
{
    char s1[100], s2[100];
    int len, i;
    printf("Enter The First String\n");
    gets(s1);
    printf("Enter The Second String\n");
    gets(s2);
    len = strlen(s1);
    for (i = 0; s2[i] != '\0'; i++)
    {
        s1[len + i] = s2[i];
    }
    s1[len + i] = '\0';
    printf("After concatenate the string is: %s\n", s1);
    return 0;
}