#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &nums[i]);
    }

    // Step 1: Find candidate
    int candidate = nums[0];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
            count = 1;
        }
        else if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    // Step 2: Verify candidate
    count = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] == candidate)
            count++;
    }

    if (count > n / 2)
        printf("%d", candidate);
    else
        printf("-1");

    return 0;
}