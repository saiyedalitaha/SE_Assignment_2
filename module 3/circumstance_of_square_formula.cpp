//11.Find circumference of square formula : C = 4 * a
#include <stdio.h>

int main() {
    float side_length, circumference;

    // Prompt the user for the length of a side
    printf("Enter the length of a side of the square: ");
    scanf("%f", &side_length);

    // Calculate the circumference
    circumference = 4 * side_length;

    // Display the result
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}

