#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i, highest = 0;

    for (i = 0; i < 5; i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    printf("Student with highest marks:\n");
    printf("Name: %s\n", s[highest].name);
    printf("Roll No: %d\n", s[highest].roll_no);
    printf("Marks: %.2f\n", s[highest].marks);

    return 0;
}