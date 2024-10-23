// 15.Convert school’s name in abbreviated form ?
#include <stdio.h>
#include <ctype.h>

int main() {
    char schoolName[100], abbreviation[100];
    int j = 0;

    // Input the school's name
    printf("Enter the school's name: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    // Create abbreviation
    for (int i = 0; schoolName[i] != '\0'; i++) {
        if (i == 0 || schoolName[i - 1] == ' ') {
            abbreviation[j++] = toupper(schoolName[i]);
        }
    }
    abbreviation[j] = '\0'; // Null-terminate the string

    // Output the abbreviation
    printf("Abbreviated form: %s\n", abbreviation);
    
    return 0;
}
Certainly! Below is a simple C program that takes a school's name as input and converts it into its abbreviated form (using the first letter of each word). The program includes only the necessary elements from `stdio.h`.

```c
#include <stdio.h>

int main() {
    char schoolName[100];
    char abbreviation[100];
    int i = 0, j = 0;

    printf("Enter the school's name: ");
    fgets(schoolName, sizeof(schoolName), stdin);

    // Create abbreviation
    while (schoolName[i] != '\0') {
        // Check if the current character is the start of a word
        if (i == 0 || schoolName[i-1] == ' ') {
            abbreviation[j++] = schoolName[i];
        }
        i++;
    }
    
    abbreviation[j] = '\0'; // Null-terminate the abbreviation string

    printf("Abbreviation: %s\n", abbreviation);
    
    return 0;
}
