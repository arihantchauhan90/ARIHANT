#include <stdio.h>

enum Status {
    PENDING = 10,
    APPROVED = 20,
    REJECTED = 30
};

int main() {
    enum Status s1 = PENDING;
    enum Status s2 = APPROVED;
    enum Status s3 = REJECTED;

    printf("PENDING = %d\n", s1);
    printf("APPROVED = %d\n", s2);
    printf("REJECTED = %d\n", s3);

    return 0;
}