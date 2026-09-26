#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char word[100], longest[100];
    int i = 0, j = 0;

    fgets(sentence, sizeof(sentence), stdin);

    while (1) {
        if (sentence[i] != ' ' &&
            sentence[i] != '\n' &&
            sentence[i] != '\0') {
            
            word[j++] = sentence[i];
        }
        else {
            word[j] = '\0';

            if (j > strlen(longest)) {
                strcpy(longest, word);
            }

            j = 0;
        }

        if (sentence[i] == '\0')
            break;

        i++;
    }

    printf("%s", longest);

    return 0;
}