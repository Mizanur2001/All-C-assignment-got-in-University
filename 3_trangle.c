#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, s, c, area, result, p;
    p = a + b + c;
    s = (a + b + c) / 2;
    result = (s * (s - a) * (s - b) * (s - c));
    area = sqrt(result);
    printf("Enter the value of side A\n");
    scanf("%f", &a);
    printf("Enter the value of side B\n");
    scanf("%f", &b);
    printf("Enter the value of side C\n");
    scanf("%f", &c);
    printf("The area ot the triangle is %f\n", area);
    printf("The perimeter ot the triangle is %f\n", p);

    return 0;
}