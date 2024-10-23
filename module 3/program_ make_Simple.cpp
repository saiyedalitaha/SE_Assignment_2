//2. Write a program to make Simple calculator (to makeaddition, subtraction,multiplication, division and modulo)
#include <stdio.h>

void add(float a, float b) {
    printf("Result: %.2f\n", a + b);
}

void subtract(float a, float b) {
    printf("Result: %.2f\n", a - b);
}

void multiply(float a, float b) {
    printf("Result: %.2f\n", a * b);
}

void divide(float a, float b) {
    if (b != 0) {
        printf("Result: %.2f\n", a / b);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
}

void modulo(int a, int b) {
    if (b != 0) {
        printf("Result: %d\n", a % b);
    } else {
        printf("Error: Modulo by zero is not allowed.\n");
    }
}

int main() {
    int choice;
    float num1, num2;

    printf("Simple Calculator\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulo\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    if (choice >= 1 && choice <= 4) {
        printf("Enter two numbers: ");
        scanf("%f %f", &num1, &num2);
    } else if (choice == 5) {
        int num1_int, num2_int;
        printf("Enter two integers: ");
        scanf("%d %d", &num1_int, &num2_int);
        modulo(num1_int, num2_int);
        return 0;
    } else {
        printf("Invalid choice!\n");
        return 0;
    }

    switch (choice) {
        case 1:
            add(num1, num2);
            break;
        case 2:
            subtract(num1, num2);
            break;
        case 3:
            multiply(num1, num2);
            break;
        case 4:
            divide(num1, num2);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}


