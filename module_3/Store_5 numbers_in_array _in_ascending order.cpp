//15.Store 5 numbers in array and sort it in ascending order
#include <stdio.h>

int main() {
    int numbers[5];

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Sort the numbers in ascending order using bubble sort
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (numbers[j] > numbers[j + 1]) {
                // Swap
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted numbers
    printf("\nNumbers in ascending order:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

