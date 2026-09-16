#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        if (i <= 3)
        {
            for (j = 1; j <= 2 * i - 1; j++)
            {
                printf("*\n");
            }
        }
        else
        {
            for (j = 1; j <= 2 * (5 - i) + 1; j++)
            {
                printf("*\n");
            }
        }

        printf("\n");
    }

    return 0;
}