//4. WAP to make simple calculator (operation include Addition, Subtraction,Multiplication, Division, modulo) using conditional statement  

#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    // Read two numbers and an operator from the user
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // Space before %c to consume any leftover whitespace

    // Perform the operation based on the operator
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else if (operator == '%') {
        if ((int)num2 != 0) {
            result = (int)num1 % (int)num2;
            printf("Result: %.0f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

