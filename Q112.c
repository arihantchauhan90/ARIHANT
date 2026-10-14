#include <stdio.h>

int main()
{
    int n;
    
    printf("Enter the size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int currentSum = arr[0];
    int maxSum = arr[0];

    for (int i = 1; i < n; i++)
    {
        // Either start a new subarray from arr[i]
        // or continue the previous subarray
        if (currentSum + arr[i] > arr[i])
            currentSum = currentSum + arr[i];
        else
            currentSum = arr[i];

        // Update maximum sum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);

    return 0;
}