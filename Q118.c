#include <stdio.h>

int main() {
    int n, i;
    
    scanf("%d", &n);

    int nums[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;

    for (i = 0; i < n; i++) {
        actualSum += nums[i];
    }

    int missing = expectedSum - actualSum;

    printf("%d", missing);

    return 0;
}