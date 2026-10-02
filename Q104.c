#include <stdio.h>
#include <math.h>

int main()
{
    long long n, total;
    long long x;

    scanf("%lld", &n);

    total = n * (n + 1) / 2;

    x = (long long)sqrt((double)total);

    if (x * x == total)
        printf("%lld", x);
    else
        printf("-1");

    return 0;
}