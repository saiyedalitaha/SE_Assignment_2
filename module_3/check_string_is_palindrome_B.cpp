// 8. WAP to reverse a string and check that the string is palindrome or notWrite a program of structure employee that provides the following
//b. Write a program of structure for five employee that provides the following information -print and displayempno, empname, address andage

#include <stdio.h>
#include <string.h>

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

// Function to reverse a string
void reverseString(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check if a string is a palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) return 0; // Not a palindrome
    }
    return 1; // Is a palindrome
}

int main() {
    struct Employee employees[5];

    // Input details for five employees
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        getchar(); // To consume the newline character
        fgets(employees[i].empname, sizeof(employees[i].empname), stdin);
        employees[i].empname[strcspn(employees[i].empname, "\n")] = 0; // Remove newline
        printf("Address: ");
        fgets(employees[i].address, sizeof(employees[i].address), stdin);
        employees[i].address[strcspn(employees[i].address, "\n")] = 0; // Remove newline
        printf("Age: ");
        scanf("%d", &employees[i].age);
        printf("\n");
    }

    // Display employee details
    printf("Employee Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n\n", employees[i].age);
    }

    // Check for palindrome
    char str[50];
    printf("Enter a string to check for palindrome: ");
    getchar(); // To consume the newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    char original[50];
    strcpy(original, str); // Save original string for displaying later
    reverseString(str);
    printf("Reversed String: %s\n", str);
    if (isPalindrome(original)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

