#include <stdio.h>

int main() {
    char str[100];
    int i, j, k, n = 0;

    scanf("%s", str);

    while (str[n] != '\0')
        n++;

    for (i = 0; i < n; i++) {
        for (j = i; j < n; j++) {
            for (k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}