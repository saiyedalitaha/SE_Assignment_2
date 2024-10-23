//24. 1 + 2 + 3 + 4 + 5 + ... + n
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Accept n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Print the sum in reverse
    printf("Sum from 1 to %d: %d\n", n, sum);
    printf("Sum in reverse order: ");
    for (int i = sum; i > 0; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}

