//11.Accept 5 names from user at run time.
#include <stdio.h>

int main() {
    char names[5][50]; // Array to store 5 names, each up to 49 characters + null terminator

    // Input 5 names from the user
    printf("Enter 5 names:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: ", i + 1);
        scanf("%49s", names[i]); // Use %49s to prevent buffer overflow
    }

    // Display the names
    printf("\nYou entered:\n");
    for (int i = 0; i < 5; i++) {
        printf("Name %d: %s\n", i + 1, names[i]);
    }

    return 0;
}

