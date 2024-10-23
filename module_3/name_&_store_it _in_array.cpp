//12.WAP to accept 5 students name and store it in array
#include <stdio.h>
#include <string.h> // Include string.h for strcspn

int main() {
    char names[5][50]; // Array to store 5 names, each up to 49 characters

    // Input names of 5 students
    printf("Enter the names of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline character
    }

    // Display the names
    printf("\nNames of Students:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

