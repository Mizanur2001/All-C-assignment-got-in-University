#include <stdio.h>
#include <conio.h>
int main()
{
    char val, val1;
    printf("Enter the character (getchar): \n");
    val = getchar();
    printf("Entered character (getchar): %c\n", val);
    
    printf("Enter the character (getche): \n");
    val1 = getche();
    printf("\nEntered character(getche) : %c\n", val1);

    //getch is use to hold screan But it is not possible to hold the screen
    getch();
    return 0;
}