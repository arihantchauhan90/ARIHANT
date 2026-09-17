#include <stdio.h>

int main() {
    int n, a[10][10];
    int symmetric = 1;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1)
        printf("The matrix is symmetric.\n");
    else
        printf("The matrix is not symmetric.\n");

    return 0;
}