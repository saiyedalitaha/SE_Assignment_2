//14.Find ascii value of given number
#include <stdio.h>

int main() {
    char character;

    // Ask the user for a character
    printf("Enter a character: ");
    scanf("%c", &character);

    // Display the ASCII value of the character
    printf("The ASCII value of '%c' is: %d\n", character, (int)character);

    return 0;
}

