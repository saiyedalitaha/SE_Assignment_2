//16.Accept 5 numbers from user and perform sum of array
#include <stdio.h>

int main() {
    int numbers[5], sum = 0; // Array to store 5 numbers and a variable for the sum

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }

    // Display the sum
    printf("Sum of the numbers: %d\n", sum);

    return 0;
}

