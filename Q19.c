#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Enter three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b <= c || a + c <= b || b + c <= a)
    {
        printf("Invalid Triangle");
    }
    else if (a == b && b == c)
    {
        printf("Equilateral Triangle");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles Triangle");
    }
    else
    {
        printf("Scalene Triangle");
    }

    return 0;
}