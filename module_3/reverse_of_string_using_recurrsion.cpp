//3. WAP to find reverse of string using recursion
#include <stdio.h>
#include <string.h>

// Recursive function to reverse the string
void reverseString(char str[], int start, int end) {
    if (start >= end) return; // Base case

    // Swap characters
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    // Recursive call
    reverseString(str, start + 1, end - 1);
}

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0'; // Remove newline character

    // Reverse the string
    reverseString(str, 0, strlen(str) - 1);

    // Print the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

