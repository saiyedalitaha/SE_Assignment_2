//4. WAP to print table up to given numbers
#include <stdio.h>

int main() {
    int number, limit;

    // Input the number for which the table is to be printed
    printf("Enter a number to print its multiplication table: ");
    scanf("%d", &number);

    // Input the limit up to which the table should be printed
    printf("Enter the limit: ");
    scanf("%d", &limit);

    // Print the multiplication table
    printf("Multiplication table of %d up to %d:\n", number, limit);
    for (int i = 1; i <= limit; i++) {
        printf("%d x %d = %d\n", number, i, number * i);
    }

    return 0;
}

