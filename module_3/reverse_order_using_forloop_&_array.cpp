//11.WAP to accept 5 numbers from user and display in reverse order using forloop and array
#include <stdio.h>

int main() {
    int numbers[5];

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);
    }

    // Display numbers in reverse order
    printf("Numbers in reverse order:\n");
    for (int i = 4; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

