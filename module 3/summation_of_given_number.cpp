//9. Write a program make a summation of given number (E.g.,1523 Ans: -11)
#include <stdio.h>

int main() {
    long long number; // To handle large numbers
    int sum = 0;
    
    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lld", &number);

    // Ignore the negative sign if present
    if (number < 0) {
        number = -number; // Convert to positive
    }

    // Calculate the sum of the digits
    while (number != 0) {
        sum += number % 10; // Add the last digit to sum
        number /= 10; // Remove the last digit
    }

    // Output the sum with a negative sign
    printf("Summation of digits: -%d\n", sum);

    return 0;
}

