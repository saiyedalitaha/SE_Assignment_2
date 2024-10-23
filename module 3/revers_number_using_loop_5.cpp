//28. 1 2 3 6 9 18 27 54...
#include <stdio.h>

int main() {
    int n, a = 1, b = 2, c = 3;

    // Ask for user input for the number of terms
    printf("Enter the number of terms (n >= 9): ");
    scanf("%d", &n);

    // Print the first three terms
    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);
    if (n >= 3) printf("%d ", c);

    // Generate and print the series up to n terms
    for (int i = 4; i <= n; i++) {
        int next;
        if (i % 2 == 0) {
            next = c * 2;  // Even index: multiply last term by 2
        } else {
            next = c * 3;  // Odd index: multiply last term by 3
        }

        if (i > 1) {
            // Print the new term
            printf("%d ", next);
        }

        // Update previous terms for the next iteration
        a = b;
        b = c;
        c = next;
    }

    printf("\n");

    // Print in reverse order
    printf("Series in reverse order: ");
    for (int i = n; i >= 1; i--) {
        if (i == 1) printf("%d ", 1);
        else if (i == 2) printf("%d ", 2);
        else if (i == 3) printf("%d ", 3);
        else {
            int term;
            if (i % 2 == 0) {
                term = c / 2;  // For even indices
            } else {
                term = c / 3;  // For odd indices
            }
            printf("%d ", term);
        }
    }

    printf("\n");

    return 0;
}

