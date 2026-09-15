#include <stdio.h>

int main() {
    float radius, area, circumference;
    float pi = 3.14;

    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    area = pi * radius * radius;
    circumference = 2 * pi * radius;

    printf("Area = %.2f\n", area);
    printf("Circumference = %.2f\n", circumference);

    return 0;
}