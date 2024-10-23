//13.WAP to accept 5 numbers from user and check entered number is even or oddusing of array
#include <stdio.h>

int main() {
    int numbers[5]; // Array to store 5 numbers

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Check and display whether each number is even or odd
    printf("\nResults:\n");
    for (int i = 0; i < 5; i++) {
        if (numbers[i] % 2 == 0) {
            printf("Number %d is even.\n", numbers[i]);
        } else {
            printf("Number %d is odd.\n", numbers[i]);
        }
    }

    return 0;
}

