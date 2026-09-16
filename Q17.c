#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, root1, root2;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = (b * b) - (4 * a * c);

    if (d > 0)
    {
        root1 = (-b + sqrt(d)) / (2 * a);
        root2 = (-b - sqrt(d)) / (2 * a);

        printf("Roots are Real and Distinct.\n");
        printf("Root 1 = %.2f\n", root1);
        printf("Root 2 = %.2f\n", root2);
    }
    else if (d == 0)
    {
        root1 = -b / (2 * a);

        printf("Roots are Real and Equal.\n");
        printf("Root 1 = Root 2 = %.2f\n", root1);
    }
    else
    {
        printf("Roots are Imaginary or Complex.\n");
    }

    return 0;
}