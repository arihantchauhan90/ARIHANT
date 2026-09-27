#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Remove newline added by fgets
    name[strcspn(name, "\n")] = '\0';

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Output: ");

    // Print first initial
    printf("%c. ", name[0]);

    // Print initials of middle names
    for (i = 1; i < lastSpace; i++) {
        if (name[i - 1] == ' ' && i != lastSpace) {
            printf("%c. ", name[i]);
        }
    }

    // Print surname completely
    if (lastSpace != -1) {
        printf("%s", &name[lastSpace + 1]);
    }

    printf("\n");

    return 0;
}