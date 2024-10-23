//12.Program of Armstrong Number in C Using For Loop & While Loop
#include <stdio.h>
#include <math.h>

int main() {
    int number, originalNumber, remainder, result = 0, digits = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits
    for (int temp = number; temp != 0; temp /= 10) {
        digits++;
    }

    // Calculate the sum of the cubes of the digits
    for (int temp = number; temp != 0; temp /= 10) {
        remainder = temp % 10;
        result += pow(remainder, digits);
    }

    // Check if the number is an Armstrong number
    if (result == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}

