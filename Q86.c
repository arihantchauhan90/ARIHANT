#include <stdio.h>

int main() {
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Find length without strlen()
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("Palindrome");
    else
        printf("Not palindrome");

    return 0;
}