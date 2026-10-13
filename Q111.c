#include <stdio.h>

int main()
{
    int n, k;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter k: ");
    scanf("%d", &k);

    // Each window starts from i
    for(int i = 0; i <= n - k; i++)
    {
        int found = 0;

        // Search for first negative in current window
        for(int j = i; j < i + k; j++)
        {
            if(arr[j] < 0)
            {
                printf("%d ", arr[j]);
                found = 1;
                break;
            }
        }

        // If no negative number found
        if(found == 0)
        {
            printf("0 ");
        }
    }

    return 0;
}