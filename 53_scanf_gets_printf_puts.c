#include <stdio.h>
int main()
{   //gets vs scanf
    char a[100];
    printf("Enter vale using gets(whitespace will cout here)\n");
    gets(a);
    printf("%s\n", a);

    printf("Enter vale using scanf(whitespace will not cout here)\n");
    scanf("%s", &a);
    printf("%s\n",a);

    //printf vs puts
    printf("using printf\n");
    printf("this is line 1 : ");
    printf("this is line 2 :");

    printf("\nusing puts\n");
    puts("this is line 1");
    puts("this is line 2");
    return 0;
}