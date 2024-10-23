//5. Check Number Is Positive or Negative
#include <stdio.h>

int main() {
    float number;

    // Read a number from the user
    printf("Enter a number: ");
    scanf("%f", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number is positive.\n");
    } else if (number < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}

