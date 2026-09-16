#include <stdio.h>

int main()
{
    int num, original, remainder, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while (num != 0)
    {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num = num / 10;
    }

    if (original == reverse)
    {
        printf("The number is a Palindrome.");
    }
    else
    {
        printf("The number is not a Palindrome.");
    }

    return 0;
}