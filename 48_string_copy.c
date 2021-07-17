#include <stdio.h>
int main()
{
    char s1[100], s2[10];
    int i;
    printf("Enret String S1\n");
    gets(s1);
    for (i = 0; s1[i] != '\0'; i++)
    {
        s2[i] = s1[i];
    }
    s2[i] = '\0';
    printf("The string S2\n %s\n",s2);
    return 0;
}