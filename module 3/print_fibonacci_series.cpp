//6. WAP to print Fibonacci series up to given numbers
#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next;

    // Input the limit for Fibonacci series
    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &n);

    printf("Fibonacci Series up to %d:\n", n);

    // Print Fibonacci series
    if (n >= 0) {
        printf("%d ", first); // Print 0
    }
    if (n >= 1) {
        printf("%d ", second); // Print 1
    }

    for (int i = 2; i < n; i++) {
        next = first + second; // Calculate the next number
        if (next > n) {
            break; // Stop if the next number exceeds the limit
        }
        printf("%d ", next); // Print the next number
        first = second; // Update first
        second = next; // Update second
    }

    printf("\n");

    return 0;
}

