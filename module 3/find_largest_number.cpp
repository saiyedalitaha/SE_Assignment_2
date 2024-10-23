//14.WAP to find the largest of three numbers.

#include <stdio.h>

int main() {
    int num1, num2, num3, largest;

    // Read three numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Determine the largest number
    largest = num1; // Assume num1 is the largest initially

    if (num2 > largest) {
        largest = num2; // Update if num2 is larger
    }
    if (num3 > largest) {
        largest = num3; // Update if num3 is larger
    }

    // Print the largest number
    printf("The largest number is: %d\n", largest);

    return 0;
}

