#include <stdio.h>

int main()
{
    int a[10][10], rowSum[10];
    int rows, cols, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter matrix elements:\n");

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < rows; i++)
    {
        rowSum[i] = 0;

        for (j = 0; j < cols; j++)
        {
            rowSum[i] = rowSum[i] + a[i][j];
        }
    }

    printf("Sum of each row:\n");

    for (i = 0; i < rows; i++)
    {
        printf("Row %d = %d\n", i + 1, rowSum[i]);
    }

    return 0;
}