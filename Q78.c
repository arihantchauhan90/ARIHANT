#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        sum = sum + a[i][i];
    }

    printf("%d", sum);

    return 0;
}