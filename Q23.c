#include <stdio.h>

int main()
{
    int days;
    float fine;

    printf("Enter number of late days: ");
    scanf("%d", &days);

    if (days <= 0)
    {
        printf("No Fine");
    }
    else if (days <= 5)
    {
        fine = days * 2;
        printf("Fine = Rs. %.2f", fine);
    }
    else if (days <= 10)
    {
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Fine = Rs. %.2f", fine);
    }
    else if (days <= 30)
    {
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Fine = Rs. %.2f", fine);
    }
    else
    {
        printf("Membership Cancelled");
    }

    return 0;
}