//25. (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Accept n from the user
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Calculate the sum of squares from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }

    // Print the sum of squares
    printf("Sum of squares from 1 to %d: %d\n", n, sum);
    
    // Print the individual squares in reverse order
    printf("Squares in reverse order: ");
    for (int i = n; i > 0; i--) {
        printf("%d ", i * i);
    }
    printf("\n");

    return 0;
}

