//8. WAP to reverse a string and check that the string is palindrome or notWrite a program of structure employee that provides the following
//a. information -print and display empno,empname, addressandage
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
    struct Employee emp;

    // Input employee details
    printf("Enter Employee Number: ");
    scanf("%d", &emp.empno);
    printf("Enter Employee Name: ");
    getchar(); // To consume the newline character
    fgets(emp.empname, sizeof(emp.empname), stdin);
    emp.empname[strcspn(emp.empname, "\n")] = 0; // Remove newline
    printf("Enter Address: ");
    fgets(emp.address, sizeof(emp.address), stdin);
    emp.address[strcspn(emp.address, "\n")] = 0; // Remove newline
    printf("Enter Age: ");
    scanf("%d", &emp.age);

    // Display employee details
    printf("\nEmployee Details:\n");
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);

    // Check for palindrome
    char str[50];
    printf("Enter a string to check for palindrome: ");
    getchar(); // To consume the newline character
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0; // Remove newline

    reverseString(str);
    printf("Reversed String: %s\n", str);
    if (isPalindrome(str)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

