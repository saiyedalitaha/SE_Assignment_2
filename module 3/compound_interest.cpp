//22. Calculate compound interest (Compound Interest formula: a. Formula to calculate compound interest annually is given by: Amount= P(1 + R/100)t

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    // Input principal amount, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate the amount using the compound interest formula
    amount = principal * pow((1 + rate / 100), time);
    
    // Calculate compound interest
    compound_interest = amount - principal;

    // Display the results
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Total Amount after %.2lf years: %.2lf\n", time, amount);

    return 0;
}

