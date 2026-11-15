#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

struct Student findTop(struct Student s[], int n) {
    struct Student top = s[0];

    for (int i = 1; i < n; i++) {
        if (s[i].marks > top.marks) {
            top = s[i];
        }
    }

    return top;
}

int main() {
    struct Student s[3], top;

    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll number and marks: ");
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }

    top = findTop(s, 3);

    printf("\nTop Student:\n");
    printf("Name: %s\n", top.name);
    printf("Roll Number: %d\n", top.roll);
    printf("Marks: %.2f\n", top.marks);

    return 0;
}