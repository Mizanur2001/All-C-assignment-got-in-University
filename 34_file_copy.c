#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    FILE *ptr2 = NULL;
    int i;
    char str[64];
    char cstr[64];
    printf("Enter a String on 34_file.txt\n");
    gets(str);
    ptr = fopen("34_file.txt", "a");
    fprintf(ptr, "%s", str);
    for (i = 0; str[i] != '\0'; i++)
    {
        cstr[i] = str[i];
    }
    cstr[i] = '\0';
    ptr2 = fopen("34_copy_file.txt", "a");
    fprintf(ptr2, "%s", cstr);
    printf("The content of 34_file.txt is coppied to 34_copy_file.txt\n");
    fclose(ptr);
    fclose(ptr2);
    return 0;
}