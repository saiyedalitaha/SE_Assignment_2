//3. WAP to take 10 no. Input from user find out below values
//a. How many Even numbers are there
#include <stdio.h>

int main() {
    int numbers[10];
    int evenCount = 0;

    // Input 10 numbers from the user
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Count even numbers
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    // Output the count of even numbers
    printf("Total even numbers: %d\n", evenCount);

    return 0;
}

