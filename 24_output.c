#include <stdio.h>
int main()
{
    int x = 6, y = 3,r[10];
    char ex[30] = "     expressions", re[30] = "       results", c[10] = {'+', '-', '*', '/', '%', '\0'}, d[10] = {'3', '2', '5', 'y', 'y', '\0'},e[10]={'y','y','y','x','x','\0'},f='|';
    r[0]=y+3;r[1]=y-2;r[2]=y*5;r[3]=x/y;r[4]=x%y;
    printf("%4c%9c%s%s\n",e[3], e[0], ex, re);
    for (int i = 0; i < 5; i++)
    {  
        printf("%4d%4c%5d%4c%6c=%c%c%c%4c%11d", x,f, y,f, e[3], e[i], c[i], d[i],f,r[i]);
        printf("\n");
    }

    return 0;
}