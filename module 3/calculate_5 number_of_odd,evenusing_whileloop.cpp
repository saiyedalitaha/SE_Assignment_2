//17. Calculate 5 numbers from user and calculate number of even and odd usingof while loop
#include <stdio.h>

int main() {
    int number;
    int evenCount = 0, oddCount = 0;  // Counters for even and odd numbers
    int count = 0;                     // Counter for the number of inputs

    printf("Enter 5 numbers:\n");

    while (count < 5) {
        scanf("%d", &number);  // Read a number from the user

        // Check if the number is even or odd
        if (number % 2 == 0) {
            evenCount++;  // Increment even counter
        } else {
            oddCount++;   // Increment odd counter
        }

        count++;  // Increment the input counter
    }

    // Output the counts
    printf("Number of even numbers: %d\n", evenCount);
    printf("Number of odd numbers: %d\n", oddCount);

    return 0;
}

