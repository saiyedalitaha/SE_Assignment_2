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

