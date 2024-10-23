//5. WAP to print factorial of given number
#include <stdio.h>

int main() {
    int number;
    unsigned long long factorial = 1; // Use unsigned long long to handle large results

    // Input a number from the user
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the number is negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate the factorial
        for (int i = 1; i <= number; i++) {
            factorial *= i; // Multiply factorial by the current number
        }

        // Output the factorial
        printf("Factorial of %d = %llu\n", number, factorial);
    }

    return 0;
}

