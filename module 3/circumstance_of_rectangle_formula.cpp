//8. Find circumference of Rectangle formula : C = 4 * 
#include <stdio.h>

int main() {
    float side, circumference;

    // Prompt user for the length of one side of the square
    printf("Enter the length of one side of the square: ");
    scanf("%f", &side);

    // Calculate the circumference
    circumference = 4 * side;

    // Display the result
    printf("The circumference of the square is: %.2f\n", circumference);

    return 0;
}

