//33. C Program to Read Integer and Print First Three Powers (N^1,N^2, N^3)
#include <stdio.h>

int main() {
    int N;

    // Accepting an integer from the user
    printf("Enter an integer: ");
    scanf("%d", &N);

    // Calculating and printing the first three powers of N
    printf("N^1: %d\n", N);          // N^1
    printf("N^2: %d\n", N * N);      // N^2
    printf("N^3: %d\n", N * N * N);  // N^3

    return 0;
}

