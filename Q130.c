#include <stdio.h>

int main()
{
    FILE *fp;
    int n, i;
    char name[50];
    int roll;
    float marks;

    fp = fopen("students.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter number of students: ");
    scanf("%d", &n);

    // Writing records to file
    for (i = 0; i < n; i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", name);

        printf("Roll Number: ");
        scanf("%d", &roll);

        printf("Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }

    fclose(fp);

    // Opening file for reading
    fp = fopen("students.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("\nStudent Records:\n");

    // Reading records using fscanf()
    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3)
    {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n",
               name, roll, marks);
    }

    fclose(fp);

    return 0;
}