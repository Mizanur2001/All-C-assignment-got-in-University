#include <stdio.h>
int main()
{
    float fh, cl;
    int choice;
    printf("1: Convert temperature from Fahrenheit to Celsius.\n");
    printf("2: Convert temperature from Celsius to Fahrenheit.\n");
    printf("Enter your choice (1, 2):\n");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Enter temperature in Fahrenheit:\n");
        scanf("%f", &fh);
        cl = (fh - 32) / 1.8;
        printf("Temperature in Celsius: %.2f\n", cl);
        break;
    case 2:
        printf("Enter temperature in Celsius:\n");
        scanf("%f", &cl);
        fh = (cl * 1.8) + 32;
        printf("Temperature in Fahrenheit: %.2f\n", fh);
        break;
    default:
        printf("Invalid Choice !!!\n");
    }

    return 0;
}
