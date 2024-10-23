//2. WAP to accept 5 numbers from user and display all numbers
#include <stdio.h>

int main() {
    int numbers[5];

    // Accept 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Display the numbers
    printf("You entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d\n", numbers[i]);
    }

    return 0;
}

