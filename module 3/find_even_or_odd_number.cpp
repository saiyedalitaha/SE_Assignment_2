//11.WAP to find number is even or odd using ternary operator
#include <stdio.h>

int main() {
    int number;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd using the ternary operator
    (number % 2 == 0) ? printf("%d is even.\n", number) : printf("%d is odd.\n", number);

    return 0;
}

