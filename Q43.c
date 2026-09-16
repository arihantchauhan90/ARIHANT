#include <stdio.h>

int main()
{
    int num, original, digit, i;
    int sum = 0, factorial;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        digit = num % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        num = num / 10;
    }

    if (sum == original)
    {
        printf("%d is a Strong Number.", original);
    }
    else
    {
        printf("%d is not a Strong Number.", original);
    }

    return 0;
}