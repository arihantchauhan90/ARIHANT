#include <stdio.h>
#include <math.h>

int main()
{
    float principal, rate, time;
    float simpleInterest, compoundInterest, amount;

    printf("Enter Principal Amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest: ");
    scanf("%f", &rate);

    printf("Enter Time in years: ");
    scanf("%f", &time);

    // Simple Interest
    simpleInterest = (principal * rate * time) / 100;

    // Compound Amount
    amount = principal * pow((1 + rate / 100), time);

    // Compound Interest
    compoundInterest = amount - principal;

    printf("\nSimple Interest = %.2f", simpleInterest);
    printf("\nCompound Interest = %.2f", compoundInterest);

    return 0;
}