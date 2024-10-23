//16. Calculate the Sum of Natural Numbers Using the While Loop
#include <stdio.h>

int main() {
    int number, sum = 0;  // Initialize sum to 0
    int i = 1;            // Start from the first natural number

    // Prompt user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Check if the input is positive
    if (number < 1) {
        printf("Please enter a positive integer.\n");
    } else {
        // Calculate the sum of natural numbers using a while loop
        while (i <= number) {
            sum += i;  // Add the current number to sum
            i++;       // Increment i to get the next natural number
        }

        // Output the result
        printf("Sum of natural numbers up to %d = %d\n", number, sum);
    }

    return 0;
}

