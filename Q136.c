#include <stdio.h>

enum Menu {ADD = 1, SUBTRACT, MULTIPLY};

int main() {
    int a, b, choice;

    scanf("%d %d", &a, &b);
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("Sum = %d", a + b);
            break;

        case SUBTRACT:
            printf("Difference = %d", a - b);
            break;

        case MULTIPLY:
            printf("Product = %d", a * b);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}