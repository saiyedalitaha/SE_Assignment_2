//1. Display This Information using printf
//a. Your Name
//b. Your Birth date
//c. Your Age
//d. Your Address
#include <stdio.h>

int main() {
    // Replace these values with your actual information
    const char *name = "saiyed ali taha";           // Your Name
    const char *birthDate = "september  16 , 2003"; // Your Birth Date
    int age = 20;                            // Your Age
    const char *address = "sarkhej ahmedabad "; // Your Address

    // Display the information
    printf("Name: %s\n", name);
    printf("Birth Date: %s\n", birthDate);
    printf("Age: %d\n", age);
    printf("Address: %s\n", address);

    return 0;
}

