//23.C Program to Reverse a Number Using FOR Loop Series Program:
#include <stdio.h>

int main() {
    int number, reversed = 0, remainder;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Use a for loop to reverse the number
    for (; number != 0; number /= 10) {
        remainder = number % 10; // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
    }

    // Print the reversed number
    printf("Reversed Number: %d\n", reversed);

    return 0;
}

