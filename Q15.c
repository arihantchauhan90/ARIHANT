#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("It is an Uppercase Alphabet.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("It is a Lowercase Alphabet.");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("It is a Digit.");
    }
    else
    {
        printf("It is a Special Character.");
    }

    return 0;
}