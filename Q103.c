#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int nums[n];
    int totalSum = 0;

    // Input array and calculate total sum
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
        totalSum += nums[i];
    }

    int leftSum = 0;

    for (int i = 0; i < n; i++) {

        // Sum on right side
        int rightSum = totalSum - leftSum - nums[i];

        // Check pivot condition
        if (leftSum == rightSum) {
            printf("%d\n", i);
            return 0;
        }

        // Add current element to left sum
        leftSum += nums[i];
    }

    // No pivot index found
    printf("-1\n");

    return 0;
}