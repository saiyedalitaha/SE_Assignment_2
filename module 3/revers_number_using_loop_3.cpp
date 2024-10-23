//26. (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)
#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    // Ask for user input
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    // Loop from n down to 1
    for (int i = n; i >= 1; i--) {
        sum += i * i; // Add the square of i to the sum
    }

    // Print the result
    printf("The sum of squares from %d to 1 is: %d\n", n, sum);

    return 0;
}


