#include <stdio.h>
void grade(int marks)
{
    if (marks <= 100)
    {
        if (marks < 40)
        {
            printf("fail\n");
        }
        else if (marks < 55)
        {
            printf("pass & third division \n");
        }
        else if (marks < 65)
        {
            printf("second division \n");
        }
        else if (marks < 80)
        {
            printf("first division\n");
        }
        else if (marks < 95)
        {
            printf("Distinction\n");
        }
        else
        {
            printf("extra ordinary\n");
        }
    }
    else
    {
        printf("Please Enter a valid Marks\n");
    }
}
int main()
{
    int arr[5], sum = 0;
    float per;
    printf("Enter Marks of English ,Biology,Physics,Math & chemistry\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Grade for English is ");
    grade(arr[0]);
    printf("Grade for Biology is ");
    grade(arr[1]);
    printf("Grade for Physics is ");
    grade(arr[2]);
    printf("Grade for Math is ");
    grade(arr[3]);
    printf("Grade for chemistry is ");
    grade(arr[4]);

    for (int j = 0; j < 5; j++)
    {
        sum += arr[j];
    }
    per = (float)sum / 5;
    printf("Your total Marks is %d\n", sum);
    printf("You got %.2f %%\n", per);
    printf("your Overall grade is ");
    grade(sum / 5);

    return 0;
}
