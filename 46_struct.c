#include <stdio.h>

struct Company
{
    char name[50];
    char address[100];
    long long phone;
    long long employee_number;
} Com1;

int main()
{
   // struct Company com1;
    printf("Enter the name of company:\n");
    gets(Com1.name);

    printf("Enter the Adress of the company:\n");
    gets(Com1.address);

    printf("Enter the phone number of the company:\n");
    scanf("%lld", &Com1.phone);

    printf("Enter the number of the employees of the company:\n");
    scanf("%d", &Com1.employee_number);

    printf("Company Name: ");
    puts(Com1.name);
    printf("Adress: ");
    puts(Com1.address);
    printf("Phone: %lld\n", Com1.phone);
    printf("Number of employee: %lld\n", Com1.employee_number);

    return 0;
}