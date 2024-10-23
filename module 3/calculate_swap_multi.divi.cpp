//23. WAP to calculate swap 2 numbers with using of multiplication and division.
#include <stdio.h>

int main() {
    float a, b;

    // Accepting input from the user
    printf("Enter first number (a): ");
    scanf("%f", &a);
    printf("Enter second number (b): ");
    scanf("%f", &b);

    // Swapping using multiplication and division
    if (a != 0 && b != 0) { // Ensure neither number is zero to avoid division by zero
        a = a * b; // Step 1: a now contains the product of a and b
        b = a / b; // Step 2: b becomes the original value of a
        a = a / b; // Step 3: a becomes the original value of b

        // Displaying the swapped values
        printf("\nAfter swapping:\n");
        printf("a = %.2f\n", a);
        printf("b = %.2f\n", b);
    } else {
        printf("Swapping not possible with zero values.\n");
    }

    return 0;
}

