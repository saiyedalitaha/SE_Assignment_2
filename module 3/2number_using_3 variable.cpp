//21. Accept 2 numbers from user and swap 2 numbers with using 3rd variableand without using 3rd variable
#include <stdio.h>

int main() {
    int a, b, temp;

    // Accepting two numbers from the user
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    // Swapping using a third variable
    printf("\nSwapping using a third variable:\n");
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b

    printf("After swap: a = %d, b = %d\n", a, b);

    // Swapping without using a third variable
    printf("\nSwapping without using a third variable:\n");
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    a = a + b; // Step 1: a now becomes the sum of a and b
    b = a - b; // Step 2: b becomes the original value of a
    a = a - b; // Step 3: a becomes the original value of b

    printf("After swap: a = %d, b = %d\n", a, b);

    return 0;
}

