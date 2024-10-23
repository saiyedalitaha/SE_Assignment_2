//4. WAP  WAP to find factorial using recursion
#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) return 1; // Base case
    return n * factorial(n - 1);    // Recursive call
}

int main() {
    int num;

    // Input number
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Calculate and print factorial
        printf("Factorial of %d is %d\n", num, factorial(num));
    }

    return 0;
}

