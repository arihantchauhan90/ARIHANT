#include <stdio.h>

enum Numbers {
    FIRST = 10,
    SECOND = 11,
    THIRD = 12,
    FOURTH = 13
};

int main() {
    printf("FIRST = %d\n", FIRST);
    printf("SECOND = %d\n", SECOND);
    printf("THIRD = %d\n", THIRD);
    printf("FOURTH = %d\n", FOURTH);

    return 0;
}