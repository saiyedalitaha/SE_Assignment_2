//14.Accept 5 numbers from user and find those numbers factorials
#include <stdio.h>

int main() {
    int numbers[5];  // Array to hold 5 numbers
    long long factorial;  // Variable to hold the factorial result

    // Accepting 5 numbers from the user
    printf("Enter 5 numbers:\n");
    for (int j = 0; j < 5; j++) {
        scanf("%d", &numbers[j]);
    }

    // Calculating and displaying factorials
    for (int j = 0; j < 5; j++) {
        int number = numbers[j];
        factorial = 1;  // Reset factorial for each number

        if (number < 0) {
            printf("Factorial is not defined for negative numbers: %d\n", number);
        } else {
            int i = 1;
            while (i <= number) {
                factorial *= i;  // Calculate factorial
                i++;             // Increment i
            }
            printf("Factorial of %d = %lld\n", number, factorial);
        }
    }

    return 0;
}

