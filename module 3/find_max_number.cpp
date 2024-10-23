//8. Write a program to find out the max from given number (E.g., No: -1562Max number is 6)
#include <stdio.h>

int main() {
    long long number; // Use long long to handle large numbers
    int maxDigit = -1; // Initialize to an invalid digit
    int digit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Ignore negative sign if present
    if (number < 0) {
        number = -number; // Convert to positive
    }

    // Find the maximum digit
    while (number != 0) {
        digit = number % 10; // Get the last digit
        if (digit > maxDigit) {
            maxDigit = digit; // Update max digit
        }
        number /= 10; // Remove the last digit
    }

    // Output the maximum digit
    printf("Max digit is: %d\n", maxDigit);

    return 0;
}

