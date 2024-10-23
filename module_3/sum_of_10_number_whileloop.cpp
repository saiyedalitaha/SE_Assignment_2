//15.Calculate sum of 10 numbers using of while loop
#include <stdio.h>

int main() {
    int number, sum = 0;  // Initialize sum to 0
    int count = 0;        // Counter to track the number of inputs

    printf("Enter 10 numbers:\n");

    while (count < 10) {
        scanf("%d", &number);  // Read a number from the user
        sum += number;         // Add the number to the sum
        count++;               // Increment the counter
    }

    printf("Sum of the 10 numbers = %d\n", sum);  // Display the sum

    return 0;
}

