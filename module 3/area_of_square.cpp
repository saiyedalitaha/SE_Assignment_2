//4. Find Area of Square formula : a = a2

#include <stdio.h>

int main() {
    float a, area;

    // Prompt user for the length of the side of the square
    printf("Enter the length of one side of the square: ");
    scanf("%f", &a);

    // Calculate the area
    area = a * a;

    // Display the result
    printf("The area of the square is: %.2f\n", area);

    return 0;
 
}



