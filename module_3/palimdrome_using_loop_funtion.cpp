//10.WAP to perform Palindrome number using for loop and function
#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int num) {
    int reversed = 0, original = num;

    for (; num > 0; num /= 10) {
        reversed = reversed * 10 + (num % 10);
    }

    return original == reversed; // Return 1 if palindrome, else 0
}

int main() {
    int number;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check and display result
    if (isPalindrome(number)) {
        printf("%d is a palindrome number.\n", number);
    } else {
        printf("%d is not a palindrome number.\n", number);
    }

    return 0;
}

