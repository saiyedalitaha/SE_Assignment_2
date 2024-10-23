//32. Accept 2 numbers and find out its sum check it size
#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Accepting two numbers from the user
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Displaying the sum
    printf("Sum: %d\n", sum);

    // Checking and displaying the size of the sum
    printf("Size of the sum: %zu bytes\n", sizeof(sum));

    return 0;
}

