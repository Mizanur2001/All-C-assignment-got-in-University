#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float root1, root2, imaginary, discriminant;
    printf("please enter the values of a,b,c of quadratic eqution:\n");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two distinct real roots exists:\nroot1= %.2f \nroot2= %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal and real roots exits:\nroot1= %.2f \nroot2= %.2f\n", root1, root2);
    }
    else if (discriminant < 0)
    {
        root1 = root2 = -b / (2 * a);
        imaginary = sqrt(-discriminant) / (2 * a);
        printf("Two distinct complex roots exits:\nroot1= %.2f + %.2fi \nroot2= %.2f - %.2fi\n", root1, imaginary, root2, imaginary);
    }
    return 0;
}