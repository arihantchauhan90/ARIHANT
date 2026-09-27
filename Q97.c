#include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // First character is always an initial
    if (name[0] != ' ')
        printf("%c", name[0]);

    // Character after every space is an initial
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ' && name[i] != '\n') {
            printf("%c", name[i]);
        }
    }

    return 0;
}