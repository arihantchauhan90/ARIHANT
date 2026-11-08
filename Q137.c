#include <stdio.h>

enum Role {
    ADMIN,
    USER,
    GUEST
};

int main() {
    int choice;
    enum Role role;

    printf("Enter role (0 = ADMIN, 1 = USER, 2 = GUEST): ");
    scanf("%d", &choice);

    role = choice;

    switch (role) {
        case ADMIN:
            printf("Welcome Admin! You have full access.\n");
            break;

        case USER:
            printf("Welcome User! You have standard access.\n");
            break;

        case GUEST:
            printf("Welcome Guest! You have limited access.\n");
            break;

        default:
            printf("Invalid role.\n");
    }

    return 0;
}