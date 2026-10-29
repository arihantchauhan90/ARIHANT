#include <stdio.h>

int main()
{
    FILE *input, *output;
    char ch;

    input = fopen("input.txt", "r");

    if (input == NULL)
    {
        printf("Error: input.txt not found.\n");
        return 1;
    }

    output = fopen("output.txt", "w");

    if (output == NULL)
    {
        printf("Error: Could not create output.txt.\n");
        fclose(input);
        return 1;
    }

    while ((ch = fgetc(input)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
        }

        fputc(ch, output);
    }

    fclose(input);
    fclose(output);

    printf("Text converted to uppercase successfully.\n");

    return 0;
}