//13. Find character value  from ascii
#include <stdio.h>

int main() {
    int asciiValue;

    // Ask the user for an ASCII value
    printf("Enter an ASCII value (0-127): ");
    scanf("%d", &asciiValue);

    // Check if the input is within the valid ASCII range
    if (asciiValue >= 0 && asciiValue <= 127) {
        // Convert ASCII value to character
        char character = (char)asciiValue;
        printf("The character for ASCII value %d is: '%c'\n", asciiValue, character);
    } else {
        printf("Please enter a valid ASCII value between 0 and 127.\n");
    }

    return 0;
}

