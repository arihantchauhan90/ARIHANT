#include <stdio.h>

int main()
{
    int num, digit, product = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 != 0)
        {
            product = product * digit;
        }

        num = num / 10;
    }

    printf("Product of odd digits = %d", product);

    return 0;
}