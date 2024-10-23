//12.Program of Armstrong Number in C Using For  While Loop
#include <stdio.h>
#include <math.h>
int main() {
    int number, originalNumber, remainder, result = 0, digits = 0;

    // Input a number from the user
    printf("Enter an integer: ");
    scanf("%d", &number);

    originalNumber = number;

    // Calculate the number of digits using while loop
    int temp = number;
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    // Calculate the sum of the powers of the digits using while loop
    temp = number;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, digits);
        temp /= 10;
    }

    // Check if the number is an Armstrong number
    if (result == originalNumber) {
        printf("%d is an Armstrong number.\n", originalNumber);
    } else {
        printf("%d is not an Armstrong number.\n", originalNumber);
    }

    return 0;
}

