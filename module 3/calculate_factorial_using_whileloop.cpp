//13.calculate the Factorial of a Given Number using while loop
#include <stdio.h>

int main() {
    int number;
    long long factorial = 1;  // Use long long for larger results

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        int i = 1;
        while (i <= number) {
            factorial *= i;  // Calculate factorial
            i++;             // Increment i
        }
        printf("Factorial of %d = %lld\n", number, factorial);
    }

    return 0;
}

