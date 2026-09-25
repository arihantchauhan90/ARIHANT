#include <stdio.h>

int main() {
    char str[100];
    int i, j, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] >= 'a' && str[i] <= 'z') {

            for (j = i + 1; str[j] != '\0'; j++) {

                if (str[i] == str[j]) {
                    printf("First repeating lowercase alphabet: %c", str[i]);
                    found = 1;
                    break;
                }
            }
        }

        if (found)
            break;
    }

    if (!found)
        printf("No repeating lowercase alphabet");

    return 0;
}