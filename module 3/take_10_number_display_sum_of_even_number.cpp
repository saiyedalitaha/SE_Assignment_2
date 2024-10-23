//3. WAP to take 10 no. Input from user find out below values
//c. Sum of even numbers
#include <stdio.h>

int main() {
    int numbers[10];
    int evenSum = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Calculate the sum of even numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) { // Check if the number is even
            evenSum += numbers[i];
        }
    }

    // Output the sum of even numbers
    printf("Sum of even numbers: %d\n", evenSum);

    return 0;
}

