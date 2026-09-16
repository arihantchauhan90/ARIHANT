#include <stdio.h>
#include <math.h>

int main()
{
    int num, first, last, digits, divisor, middle, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    digits = (int)log10(num);
    divisor = (int)pow(10, digits);

    first = num / divisor;
    last = num % 10;

    middle = (num % divisor) / 10;

    result = last * divisor + middle * 10 + first;

    printf("Number after swapping = %d", result);

    return 0;
}