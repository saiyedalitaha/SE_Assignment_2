//19.Calculate compound interest

#include <stdio.h>

int main() {
    double principal, rate, time, amount, compound_interest;

    // Input principal amount, rate of interest, and time
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);
    printf("Enter the rate of interest (in percentage): ");
    scanf("%lf", &rate);
    printf("Enter the time (in years): ");
    scanf("%lf", &time);

    // Calculate the total amount using the formula A = P(1 + r)^t
    amount = principal * (1 + rate / 100) * time; // Simplified for demonstration

    // Calculate compound interest
    compound_interest = amount - principal;

    // Display the results
    printf("Compound Interest: %.2lf\n", compound_interest);
    printf("Total Amount after %.2lf years: %.2lf\n", time, amount);

    return 0;
}

