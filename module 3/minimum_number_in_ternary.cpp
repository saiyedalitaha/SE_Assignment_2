//13.WAP to find minimum number among 3 numbers using ternary operator
#include <stdio.h>

int main() {
    int num1, num2, num3, min;

    // Read three numbers from the user
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    printf("Enter third number: ");
    scanf("%d", &num3);

    // Find the minimum number using the ternary operator
    min = (num1 < num2) ? ((num1 < num3) ? num1 : num3) : ((num2 < num3) ? num2 : num3);

    // Print the minimum number
    printf("The minimum number is: %d\n", min);

    return 0;
}


