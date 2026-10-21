#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int freq[1000] = {0};

    printf("Enter array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("%d", nums[i]);
            break;
        }

        freq[nums[i]]++;
    }

    return 0;
}