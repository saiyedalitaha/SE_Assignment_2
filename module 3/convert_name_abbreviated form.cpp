//16.Convert country’s name in abbreviate form  
#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char country[100];
    char abbreviation[10];
    int j = 0;

    // Ask the user for the country name
    printf("Enter the country's name: ");
    fgets(country, sizeof(country), stdin);
    
    // Remove the newline character from the input
    country[strcspn(country, "\n")] = 0;

    // Convert to abbreviation
    for (int i = 0; i < strlen(country); i++) {
        if (i == 0 || country[i - 1] == ' ') {
            abbreviation[j++] = toupper(country[i]);
        }
    }
    
    abbreviation[j] = '\0'; // Null-terminate the abbreviation string

    // Display the abbreviation
    printf("Abbreviated form: %s\n", abbreviation);

    return 0;
}


