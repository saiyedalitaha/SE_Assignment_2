//7. WAP to print number in reverse order e.g.: number =64728 ---> reverse =82746
#include <stdio.h>

int main() {
    int number, reverse = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Reverse the number
    while (number != 0) {
        int digit = number % 10; // Get the last digit
        reverse = reverse * 10 + digit; // Append the digit to the reverse
        number /= 10; // Remove the last digit from the original number
    }

    // Output the reversed number
    printf("Reversed number: %d\n", reverse);

    return 0;
}

