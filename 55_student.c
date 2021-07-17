#include <stdio.h>
struct student
{
    char name[50];
    float marks;
    int roll;
    char grade[10];
} data[1000];

int main()
{
    int n;
    printf("Enter the number of student\n");
    scanf("%d", &n);
    printf("Enter student information\n");
    for (int i = 0; i < n; i++)
    {
        data[i].roll = i + 1;
        printf("Enter data for Roll no: %d\n", data[i].roll);
        printf("Enter First name: ");
        scanf("%s", &data[i].name);
        printf("Enter marks: ");
        scanf("%f", &data[i].marks);
        printf("Enter Grade: ");
        scanf("%s", &data[i].grade);
    }

    printf("\nDisplaying Information:\n\n");
    for (int j = 0; j < n; j++)
    {
        printf("Roll no : %d\n", data[j].roll);
        printf("Name : %s\n", data[j].name);
        printf("Marks : %.2f\n", data[j].marks);
        printf("Grade : %s\n", data[j].grade);
        printf("\n");
    }

    return 0;
}