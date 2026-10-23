#include <stdio.h>

int main() {
    FILE *fp;
    char line[100];

    fp = fopen("info.txt", "r");

    if (fp == NULL) {
        printf("File could not be opened.\n");
        return 1;
    }

    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);
    }

    fclose(fp);

    return 0;
}