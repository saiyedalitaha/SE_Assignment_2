//9.C Program to Check Uppercase or Lowercase or Digit  or SpecialCharacter
#include <stdio.h>

int main() {
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check the type of the character
    if (ch >= 'A' && ch <= 'Z') {
        printf("%c is an uppercase letter.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("%c is a lowercase letter.\n", ch);
    } else if (ch >= '0' && ch <= '9') {
        printf("%c is a digit.\n", ch);
    } else {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}

