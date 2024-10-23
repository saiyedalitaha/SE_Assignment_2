//5. Find Area of Cube formula : a = 6a2
#include <stdio.h>

int main() {
    float a, area;

    // Prompt user for the length of one side of the cube
    printf("Enter the length of one side of the cube: ");
    scanf("%f", &a);

    // Calculate the surface area
    area = 6 * a * a;

    // Display the result
    printf("The surface area of the cube is: %.2f\n", area);

    return 0;
}

