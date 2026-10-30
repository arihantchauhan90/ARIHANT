#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    fp = fopen("input.txt", "r");

    if (fp == NULL)
    {
        printf("Unable to open file.");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF)
    {
        if ((ch >= 'A' && ch <= 'Z') ||
            (ch >= 'a' && ch <= 'z'))
        {
            if (ch == 'A' || ch == 'E' || ch == 'I' ||
                ch == 'O' || ch == 'U' || ch == 'a' ||
                ch == 'e' || ch == 'i' || ch == 'o' ||
                ch == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    fclose(fp);

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d\n", consonants);

    return 0;
}