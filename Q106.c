#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n];

    // Input array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find next greater element
    for (int i = 0; i < n; i++) {
        int nextGreater = -1;

        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break;
            }
        }

        printf("%d", nextGreater);

        if (i < n - 1) {
            printf(", ");
        }
    }

    return 0;
}