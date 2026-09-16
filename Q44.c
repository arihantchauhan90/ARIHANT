#include <stdio.h>

int main()
{
    int n, i;
    float sum = 1.0;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        sum = sum + (float)(2 * i - 1) / (2 * i);
    }

    printf("Sum of the series = %.2f", sum);

    return 0;
}