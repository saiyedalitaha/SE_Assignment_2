//22. Accept 3 numbers from user using while loop and check each numberspalindrome
#include <stdio.h>

int main() {
    int count = 0;
    int number, original, reversed;

    while (count < 3) {
        printf("Enter a number: ");
        scanf("%d", &number);

        original = number;
        reversed = 0;

        // Reverse the number
        while (number > 0) {
            reversed = reversed * 10 + (number % 10);
            number /= 10;
        }

        // Check if the original number is equal to the reversed number
        if (original == reversed) {
            printf("%d is a palindrome.\n", original);
        } else {
            printf("%d is not a palindrome.\n", original);
        }

        count++; // Increment the count
    }

    return 0;
}

