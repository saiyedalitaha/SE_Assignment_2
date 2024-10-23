//37. wap to show  ii. Vowel or Consonant using switch case
#include <stdio.h>

int main() {
    char character;

    // Input a character
    printf("Enter a character: ");
    scanf(" %c", &character);

    // Check if the character is a vowel or consonant
    switch (character) {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            printf("%c is a vowel.\n", character);
            break;
        default:
            if ((character >= 'a' && character <= 'z') || (character >= 'A' && character <= 'Z')) {
                printf("%c is a consonant.\n", character);
            } else {
                printf("Invalid input! Please enter an alphabetic character.\n");
            }
            break;
    }

    return 0;
}

