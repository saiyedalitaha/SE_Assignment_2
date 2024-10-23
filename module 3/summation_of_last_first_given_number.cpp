//10.Write a program you have to make a summation of first and last Digit. (E.g.,1234 Ans: -5)
#include <stdio.h>

int main() {
    long long number; // To handle large numbers
    int firstDigit, lastDigit;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Ignore the negative sign if present
    if (number < 0) {
        number = -number; // Convert to positive
    }

    // Get the last digit
    lastDigit = number % 10;

    // Get the first digit
    while (number >= 10) {
        number /= 10; // Remove the last digit until only the first digit remains
    }
    firstDigit = number;

    // Calculate the summation of the first and last digits
    int sum = firstDigit + lastDigit;

    // Output the result with a negative sign
    printf("Summation of the first and last digits: -%d\n", sum);

    return 0;
}

