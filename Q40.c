#include <stdio.h>

int main()
{
    char binary[100];
    int i;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (i = 0; binary[i] != '\0'; i++)
    {
        if (binary[i] == '0')
        {
            binary[i] = '1';
        }
        else if (binary[i] == '1')
        {
            binary[i] = '0';
        }
        else
        {
            printf("Invalid binary number.");
            return 0;
        }
    }

    printf("1's Complement = %s", binary);

    return 0;
}