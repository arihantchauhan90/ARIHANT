#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length without strlen()
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    printf("Reversed string: ");

    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    return 0;
}